//��XML
QFile xmlLodeFile(tr("./config/config.xml"));
if(!xmlLodeFile.open(QIODevice::ReadOnly))
{	
	QMessageBox::information(NULL,tr("����"),tr("�޷���config.xml�����ļ������ܶԳ��������Ӱ�죬����ϸ����ļ���"));
	close() ;
}
QDomDocument doc;
if(!doc.setContent(&xmlLodeFile,false))
	close() ;
xmlLodeFile.close();

QDomElement root = doc.documentElement();
if(root.tagName() != "root")
{
	QMessageBox::information(NULL,tr("����"),tr("config.xml�ļ��淶����ȷ�������Ƿ��޸�"));
	close() ;
}
QDomElement classElement, titleElement, first;
classElement = root.firstChildElement(tr("����"));
titleElement = classElement.firstChildElement(tr("title"));
while(!titleElement.isNull())
{
	int iIndex = titleElement.text().lastIndexOf('/');
	QString saveFileName = titleElement.text().mid(iIndex+1); 
	titleElement = titleElement.nextSiblingElement(tr("title"));
}






//дXML
QFile xmlFile(tr("./config/config.xml"));
if(!xmlFile.open(QIODevice::WriteOnly))
{
	QMessageBox::information(NULL,tr("����"),tr("�޷���config.xml�����ļ���"));
	return -1;
} 
if(!doc.setContent(&xmlFile,false))
{
	QMessageBox::information(NULL,tr("����"),tr("�޷���config.xml�����ļ���"));
	return -1;
} 
xmlFile.close();
QDomDocument doc;
QDomElement root = doc.documentElement();
if(root.tagName() != "root")
{
	QMessageBox::information(NULL,tr("����"),tr("config.xml�ļ��淶����ȷ�������Ƿ��޸�"));
	return -1;
}
	//�޸�xml�ļ�
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