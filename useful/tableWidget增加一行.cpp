#include "os_experiment_2.h"

OS_Experiment_2::OS_Experiment_2(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	
	connect(ui.CurrentDirEdit, SIGNAL(textChanged ( const QString&)),this ,SLOT(setEditWidth(const QString&)));
	connect(ui.treeView,SIGNAL(itemClicked(QTreeWidgetItem*, int)),this,SLOT(other_treeViewItemChange( QTreeWidgetItem*, int)));

	init_data();
}
OS_Experiment_2::~OS_Experiment_2()
{
}

void OS_Experiment_2::init_data()
{
	currentTreeViewItem = NULL;

	for(int i=0; i<MEMSIZE; i++)
		freeBlockLink.push_back(i);

	currentCmdIndex = -1;
	root_DIR = new DIR_info("root", RDWR, NULL);
	root_DIR->_parent_DIR = NULL;
	current_parentDIR = root_DIR;
	currentTreeWidgetItem = ui.treeView->topLevelItem(0);

	ui.tableView->horizontalHeader()->setStretchLastSection(true);
}

const DIR_info& OS_Experiment_2::findDIR_info(QTreeWidgetItem* opOBJ)
{
	QTreeWidgetItem *temp_Item = opOBJ;
	QStringList his;
	his.push_back(temp_Item->text(0));
	while(temp_Item->parent() && temp_Item->parent()->text(0) != "root")
	{
		temp_Item = temp_Item->parent();
		his.push_back(temp_Item->text(0));
	}

	int size = his.size();
	DIR_info *temp = root_DIR;
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<temp->_child_DIR.size(); j++)
			if(temp->_child_DIR[j].getName() == his.last())
			{
				temp = &temp->_child_DIR[j];
				his.pop_back();
				break;
			}
	}

	return *temp;
}

void OS_Experiment_2::updata(QTreeWidgetItem *currentTreeViewItem)
{
	DIR_info opOBJ = findDIR_info(currentTreeViewItem);

	QTableWidgetItem *head, *name, *attrib, *size, *memBlock;
	ui.tableView->setRowCount(0);
	QIcon icon_folder;
	icon_folder.addFile("folder.ico");
	QIcon icon_file;
	icon_file.addFile("file.ico");
	for(int i=0; i<opOBJ._child_DIR.size(); i++)
	{
		int row = ui.tableView->rowCount();
		ui.tableView->setRowCount(ui.tableView->rowCount() + 1);
		head= new QTableWidgetItem();
		head->setIcon(icon_folder);
		ui.tableView->setVerticalHeaderItem(row, head);
		name = new QTableWidgetItem(opOBJ._child_DIR[i].getName());
		name->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.tableView->setItem(row,0,name);
		attrib = new QTableWidgetItem(opOBJ._child_DIR[i].getAttribute() ? tr("读写") : tr("只读"));
		attrib->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.tableView->setItem(row,1,attrib);
		size = new QTableWidgetItem(QString::number(opOBJ._child_DIR[i].getSize()));
		size->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.tableView->setItem(row,2,size);
		memBlock = new QTableWidgetItem("");
		memBlock->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.tableView->setItem(row,3,memBlock);
	}

	for(int i=0; i<opOBJ._child_FILE.size(); i++)
	{
		int row = ui.tableView->rowCount();
		ui.tableView->setRowCount(ui.tableView->rowCount() + 1);
		head= new QTableWidgetItem();
		head->setIcon(icon_file);
		ui.tableView->setVerticalHeaderItem(row, head);
		name = new QTableWidgetItem(opOBJ._child_FILE[i].getName());
		name->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.tableView->setItem(row,0,name);
		attrib = new QTableWidgetItem(opOBJ._child_FILE[i].getAttribute() ? tr("读写") : tr("只读"));
		attrib->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.tableView->setItem(row,1,attrib);
		size = new QTableWidgetItem(QString::number(opOBJ._child_FILE[i].getSize()));
		size->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.tableView->setItem(row,2,size);
		QString block;
		for(int j=0; j<opOBJ._child_FILE[i]._fileBlock.size(); j++)
			block += QString::number(opOBJ._child_FILE[i]._fileBlock[j]) + ",";
		memBlock = new QTableWidgetItem(block.mid(0,block.size() - 1));
		memBlock->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.tableView->setItem(row,3,memBlock);
	}
}

void OS_Experiment_2::cmd_mkdir(QString cmd)
{
	if(current_parentDIR->getAttribute() == RDONLY)
	{
		ui.cmdHistoryEdit->append(tr("       error >> 当前父目录为只读属性，创建失败！"));
		return ;
	}
	QRegExp regExp("(\\w+)\\s+(\\w+)\\s+([01])");
	regExp.setMinimal(false);
	regExp.indexIn(cmd, 0);
	int count =regExp.captureCount();
	if(count != 3 || regExp.cap(0) == "")
	{
		ui.cmdHistoryEdit->append(tr("       error >> 命令出错，请仔细检查参数！"));
		return ;
	}

	QString name = regExp.cap(2);
	for(QList<DIR_info>::Iterator it = current_parentDIR->_child_DIR.begin(); it!= current_parentDIR->_child_DIR.end(); it++)
		if(it->getName() == name)
		{
			ui.cmdHistoryEdit->append(tr("       error >> 文件夹以存在！"));
			return ;
		}
	int attribute = regExp.cap(3).toInt();

	DIR_info temp(name,attribute,current_parentDIR);
	if(current_parentDIR)
		current_parentDIR->_child_DIR.append(temp);

	QTreeWidgetItem *tempItem = new QTreeWidgetItem();
	tempItem->setText(0,name);
	QIcon icon_folder;
	icon_folder.addFile("folder.ico");
	tempItem->setIcon(0, icon_folder);
	currentTreeWidgetItem->addChild(tempItem);
}
void OS_Experiment_2::cmd_mk(QString cmd)
{
	if(current_parentDIR->getAttribute() == RDONLY)
	{
		ui.cmdHistoryEdit->append(tr("       error >> 当前父目录为只读属性，创建失败！"));
		return ;
	}

	QRegExp regExp("(\\w+)\\s+(\\w+)\\s+([01])\\s+([0-9]+)");
	regExp.setMinimal(false);
	regExp.indexIn(cmd, 0);
	int count =regExp.captureCount();
	if(count != 4 || regExp.cap(0) == "")
	{
		ui.cmdHistoryEdit->append(tr("       error >> 命令出错，请仔细检查参数！"));
		return ;
	}
	QString name = regExp.cap(2);

	for(QVector<FILE_info>::Iterator it = current_parentDIR->_child_FILE.begin(); it!= current_parentDIR->_child_FILE.end(); it++)
		if(it->getName() == name)
		{
			ui.cmdHistoryEdit->append(tr("       error >> 文件已存在！"));
			return ;
		}
	int attribute = regExp.cap(3).toInt();
	int size = regExp.cap(4).toInt();
	if(size > freeBlockLink.size())
	{
		ui.cmdHistoryEdit->append(tr("       error >> 空间不足，创建失败！"));
		return ;
	}
	FILE_info temp(name,size,attribute,current_parentDIR,freeBlockLink);
	if(current_parentDIR)
		current_parentDIR->_child_FILE.push_back(temp);
}
void OS_Experiment_2::cmd_rmdir(QString cmd)
{
	if(current_parentDIR->getAttribute() == RDONLY)
	{
		ui.cmdHistoryEdit->append(tr("       error >> 当前父目录为只读属性，创建失败！"));
		return ;
	}
	QRegExp regExp("(\\w+)\\s+(\\w+)");
	regExp.setMinimal(false);
	regExp.indexIn(cmd, 0);
	int count =regExp.captureCount();
	if(count != 2 || regExp.cap(0) == "")
	{
		ui.cmdHistoryEdit->append(tr("       error >> 命令出错，请仔细检查参数！"));
		return ;
	}
	QString name = regExp.cap(2);

	bool findIt = false;
	for(QList<DIR_info>::Iterator it = current_parentDIR->_child_DIR.begin(); it!= current_parentDIR->_child_DIR.end(); it++)
		if(it->getName() == name)
		{
			findIt = true;
			current_DIR = &(*it);
			if(current_DIR->getID() == findDIR_info(currentTreeWidgetItem).getID())
				currentTreeWidgetItem = currentTreeWidgetItem->parent();
			current_DIR->delDIR(freeBlockLink);
			break; ;
		}

	if(!findIt)
	{
		ui.cmdHistoryEdit->append(tr("       error >> 没有找到指定文件，请检查参数！"));
		return ;
	}

	for(int i=0; i<currentTreeWidgetItem->childCount(); i++)
	{
		if(currentTreeWidgetItem->child(i)->text(0) == name)
		{
			currentTreeWidgetItem->removeChild(currentTreeWidgetItem->child(i));
			break ;
		}
	}
}
void OS_Experiment_2::cmd_rm(QString cmd)
{
	if(current_parentDIR->getAttribute() == RDONLY)
	{
		ui.cmdHistoryEdit->append(tr("       error >> 当前父目录为只读属性，创建失败！"));
		return ;
	}
	QRegExp regExp("(\\w+)\\s+(\\w+)");
	regExp.setMinimal(false);
	regExp.indexIn(cmd, 0);
	int count =regExp.captureCount();
	if(count != 2 || regExp.cap(0) == "")
	{
		ui.cmdHistoryEdit->append(tr("       error >> 命令出错，请仔细检查参数！"));
		return ;
	}
	QString name = regExp.cap(2);

	bool findIt = false;
	for(QVector<FILE_info>::Iterator it = current_parentDIR->_child_FILE.begin(); it!= current_parentDIR->_child_FILE.end(); it++)
		if(it->getName() == name)
		{
			findIt = true;
			current_FILE = it;
			current_FILE->delFile(freeBlockLink);
			break ;
		}

	if(!findIt)
		{
			ui.cmdHistoryEdit->append(tr("       error >> 没有找到指定文件，请检查参数！"));
			return ;
		}
}
void OS_Experiment_2::cmd_ren(QString cmd)
{
	if(current_parentDIR->getAttribute() == RDONLY)
	{
		ui.cmdHistoryEdit->append(tr("       error >> 当前父目录为只读属性，创建失败！"));
		return ;
	}
	QRegExp regExp("(\\w+)\\s+(\\w+)\\s+(\\w+)");
	regExp.setMinimal(false);
	regExp.indexIn(cmd, 0);
	int count =regExp.captureCount();
	if(count != 3 || regExp.cap(0) == "")
	{
		ui.cmdHistoryEdit->append(tr("       error >> 命令出错，请仔细检查参数！"));
		return ;
	}
	QString oldName = regExp.cap(2);
	QString newName = regExp.cap(3);

	bool findIt = false;
	for(QList<DIR_info>::Iterator it = current_parentDIR->_child_DIR.begin(); it!= current_parentDIR->_child_DIR.end(); it++)
		if(it->getName() == oldName)
		{
			findIt = true;
			it->setName(newName);
			break ;
		}
	
	if(!findIt)
		for(QVector<FILE_info>::Iterator it = current_parentDIR->_child_FILE.begin(); it!= current_parentDIR->_child_FILE.end(); it++)
			if(it->getName() == oldName)
			{
				findIt = true;
				it->setName(newName);
				break ;
			}

	if(!findIt)
		{
			ui.cmdHistoryEdit->append(tr("       error >> 没有找到指定文件，请检查参数！"));
			return ;
		}

	for(int i=0; i<currentTreeWidgetItem->childCount(); i++)
		if(currentTreeWidgetItem->child(i)->text(0) == oldName)
		{
			currentTreeWidgetItem->child(i)->setText(0,newName);
			break;
		}
}
void OS_Experiment_2::cmd_size(QString cmd)
{
	if(current_parentDIR->getAttribute() == RDONLY)
	{
		ui.cmdHistoryEdit->append(tr("       error >> 当前父目录为只读属性，创建失败！"));
		return ;
	}

	QRegExp regExp("(\\w+)\\s+(\\w+)\\s+([0-9]+)");
	regExp.setMinimal(false);
	regExp.indexIn(cmd, 0);
	int count =regExp.captureCount();
	if(count != 3 || regExp.cap(0) == "")
	{
		ui.cmdHistoryEdit->append(tr("       error >> 命令出错，请仔细检查参数！"));
		return ;
	}
	QString name = regExp.cap(2);
	int size = regExp.cap(3).toInt();

	bool findIt = false;
	for(QVector<FILE_info>::Iterator it = current_parentDIR->_child_FILE.begin(); it!= current_parentDIR->_child_FILE.end(); it++)
		if(it->getName() == name)
		{
			findIt = true;
			it->setSize(size,freeBlockLink);
			break ;
		}
	
	if(!findIt)
		{
			ui.cmdHistoryEdit->append(tr("       error >> 没有找到指定文件，请检查参数！"));
			return ;
		}
}
void OS_Experiment_2::cmd_attrib(QString cmd)
{
	if(current_parentDIR->getAttribute() == RDONLY)
	{
		ui.cmdHistoryEdit->append(tr("       error >> 当前父目录为只读属性，创建失败！"));
		return ;
	}

	QRegExp regExp("(\\w+)\\s+(\\w+)\\s+([01])");
	regExp.setMinimal(false);
	regExp.indexIn(cmd, 0);
	int count =regExp.captureCount();
	if(count != 3 || regExp.cap(0) == "")
	{
		ui.cmdHistoryEdit->append(tr("       error >> 命令出错，请仔细检查参数！"));
		return ;
	}
	QString name = regExp.cap(2);
	int attribute = regExp.cap(3).toInt();

	bool findIt = false;
	for(QList<DIR_info>::Iterator it = current_parentDIR->_child_DIR.begin(); it!= current_parentDIR->_child_DIR.end(); it++)
		if(it->getName() == name)
		{
			findIt = true;
			it->setAttribute(attribute);
			return ;
		}

	if(!findIt)
		for(QVector<FILE_info>::Iterator it = current_parentDIR->_child_FILE.begin(); it!= current_parentDIR->_child_FILE.end(); it++)
			if(it->getName() == name)
			{
				findIt = true;
				it->setAttribute(attribute);
				return ;
			}
		
	if(!findIt)
		{
			ui.cmdHistoryEdit->append(tr("       error >> 没有找到指定文件，请检查参数！"));
			return ;
		}
}
void OS_Experiment_2::cmd_cd2root()
{
	current_parentDIR = root_DIR;
	ui.CurrentDirEdit->setText("\\root >");
	currentTreeWidgetItem = ui.treeView->topLevelItem(0);
}
void OS_Experiment_2::cmd_cd2up()
{
	if(current_parentDIR->_parent_DIR)
	{
		current_parentDIR = current_parentDIR->_parent_DIR;
		cmdHistory.append("cd..");
		ui.CurrentDirEdit->setText(ui.CurrentDirEdit->text().mid(0,ui.CurrentDirEdit->text().lastIndexOf("\\")) + " >");
		currentTreeWidgetItem = currentTreeWidgetItem->parent();
	}
}
void OS_Experiment_2::cmd_cd2down(QString cmd)
{
	QRegExp regExp("(\\w+)\\s+(\\w+)");
	regExp.setMinimal(false);
	regExp.indexIn(cmd, 0);
	int count =regExp.captureCount();
	if(count != 2 || regExp.cap(0) == "")
	{
		ui.cmdHistoryEdit->append(tr("       error >> 命令出错，请仔细检查参数！"));
		return ;
	}
	QString name = regExp.cap(2);

	bool findIt = false;
	for(QList<DIR_info>::Iterator it = current_parentDIR->_child_DIR.begin(); it!= current_parentDIR->_child_DIR.end(); it++ )
		if(it->getName() == name)
		{
			findIt = true;
			current_parentDIR = &(*it);
			ui.CurrentDirEdit->setText(ui.CurrentDirEdit->text().mid(0,ui.CurrentDirEdit->text().indexOf(" ")) + "\\" + name + " >");
			break ;
		}

	if(!findIt)
		{
			ui.cmdHistoryEdit->append(tr("       error >> 没有找到指定文件，请检查参数！"));
			return ;
		}

	for(int i=0; i<currentTreeWidgetItem->childCount(); i++)
		if(currentTreeWidgetItem->child(i)->text(0) == name)
		{
			currentTreeWidgetItem = currentTreeWidgetItem->child(i);
			break;
		}
}

void OS_Experiment_2::other_treeViewItemChange(QTreeWidgetItem* _currentTreeViewItem, int col)
{
	currentTreeViewItem = _currentTreeViewItem;
	updata(currentTreeViewItem);
}

//键盘接受命令
void OS_Experiment_2::keyPressEvent(QKeyEvent *event)
{
	switch (event->key())
	{
	case Qt::Key_Up:
		if(currentCmdIndex > 0)
			ui.CmdEdit->setText(cmdHistory[--currentCmdIndex]);
		break ;

	case Qt::Key_Down :
		if(currentCmdIndex+1 < cmdHistory.size())
			ui.CmdEdit->setText(cmdHistory[++currentCmdIndex]);
		break ;

	case Qt::Key_Return :
		{
			bool needUpdata = true;
			QString command =  ui.CmdEdit->text();
			QString cmd = command.mid(0,ui.CmdEdit->text().indexOf(" "));
			ui.cmdHistoryEdit->append(ui.CurrentDirEdit->text() + command);
			cmdHistory.append(command);
			currentCmdIndex = cmdHistory.size();
			ui.CmdEdit->setText("");
			if(cmd == "exit")
				close();
			else if(cmd == "mkdir")
				cmd_mkdir(command);
			else if(cmd == "mk")
				cmd_mk(command);
			else if(cmd == "rmdir")
				cmd_rmdir(command);
			else if(cmd == "rm")
				cmd_rm(command);
			else if(cmd == "ren")
				cmd_ren(command);
			else if(cmd == "size")
				cmd_size(command);
			else if(cmd == "attrib")
				cmd_attrib(command);
			else if(cmd == "cd\\")
			{
				needUpdata = false;
				cmd_cd2root();
			}
			else if(cmd == "cd..")
			{
				needUpdata = false;
				cmd_cd2up();
			}
			else if(cmd == "cd")
			{
				needUpdata = false;
				cmd_cd2down(command);
			}
			else
				ui.cmdHistoryEdit->append("       error >> 命令输入错误，请仔细检查！");

			if(!needUpdata || !currentTreeViewItem)
				break;
			const DIR_info temp = findDIR_info(currentTreeViewItem);
			if(current_parentDIR->getID() >= temp.getID())
				updata(currentTreeViewItem);
			break ;
		}

	default :
		break ;
	}
}

void OS_Experiment_2::closeEvent(QCloseEvent *event)
{
// 	QMessageBox   mb(tr("确认"), tr("确定要退出？"),
// 		QMessageBox::Question,
// 		QMessageBox::Yes   |   QMessageBox::Default,
// 		QMessageBox::No     |   QMessageBox::Escape,
// 		QMessageBox::NoButton);
// 	if(mb.exec() == QMessageBox::No)
// 		event->ignore();
// 	else
// 		event->accept();
}