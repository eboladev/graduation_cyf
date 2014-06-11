//读XML
QFile xmlLodeFile(tr("./config/config.xml"));
if(!xmlLodeFile.open(QIODevice::ReadOnly))
{	
	QMessageBox::information(NULL,tr("错误"),tr("无法打开config.xml配置文件，可能对程序操作有影响，请仔细检查文件！"));
	close() ;
}
QDomDocument doc;
if(!doc.setContent(&xmlLodeFile,false))
	close() ;
xmlLodeFile.close();

QDomElement root = doc.documentElement();
if(root.tagName() != "root")
{
	QMessageBox::information(NULL,tr("错误"),tr("config.xml文件规范不正确，请检查是否被修改"));
	close() ;
}
QDomElement classElement, titleElement, first;
classElement = root.firstChildElement(tr("音乐"));
titleElement = classElement.firstChildElement(tr("title"));
while(!titleElement.isNull())
{
	int iIndex = titleElement.text().lastIndexOf('/');
	QString saveFileName = titleElement.text().mid(iIndex+1); 
	titleElement = titleElement.nextSiblingElement(tr("title"));
}






//写XML
QFile xmlFile(tr("./config/config.xml"));
if(!xmlFile.open(QIODevice::WriteOnly))
{
	QMessageBox::information(NULL,tr("出错"),tr("无法打开config.xml配置文件！"));
	return -1;
} 
if(!doc.setContent(&xmlFile,false))
{
	QMessageBox::information(NULL,tr("出错"),tr("无法打开config.xml配置文件！"));
	return -1;
} 
xmlFile.close();
QDomDocument doc;
QDomElement root = doc.documentElement();
if(root.tagName() != "root")
{
	QMessageBox::information(NULL,tr("错误"),tr("config.xml文件规范不正确，请检查是否被修改"));
	return -1;
}
	//修改xml文件
classElement = root.firstChildElement(clickedClass);
titleElement = classElement.firstChildElement(fileClass);

QDomElement addElement = doc.createElement(tr("title"));
QDomText addText = doc.createTextNode(saveFileName);
addElement.appendChild(addText);
titleElement.appendChild(addElement);

QFile xmlModifFile("./config/config.xml");
if (!xmlModifFile.open(QFile::WriteOnly))
	return -1;
QTextStream out(&xmlModifFile);
QDomDocument xmlDoc;
QString strHead("version=\"1.0\" encoding=\"GB2312\"");
xmlDoc.appendChild(xmlDoc.createProcessingInstruction("xml", strHead));
out<<xmlDoc.toString();
root.save(out,3);
xmlModifFile.close();