#ifndef QUERYTHREAD_H
#define QUERYTHREAD_H

#include <QThread>
#include <QSqlQuery>

//防止查询过程太耗时造成的UI假死，因此使用线程来查询
class QueryThread : public QThread
{
	Q_OBJECT

private:
	QString sqlWords;
	QSqlQuery query;

public:
	QueryThread();
	~QueryThread();
	//将查询字符串传递过来
	void setSqlWords(QString _sqlWords);

signals:
	//查询完成之后发射信号，将这个值传回去
	void queryFinished(QSqlQuery*);

protected:
	void run();
};

#endif