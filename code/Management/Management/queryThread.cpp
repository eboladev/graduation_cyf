#include "queryThread.h"

#include<QMessageBox>

QueryThread::QueryThread()
{}
QueryThread::~QueryThread()
{}

void QueryThread::run()
{
	this->msleep(1);
	query.exec(sqlWords);
	emit queryFinished(&query);
}

void QueryThread::setSqlWords(QString _sqlWords)
{
	sqlWords = _sqlWords;
}