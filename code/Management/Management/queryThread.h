#ifndef QUERYTHREAD_H
#define QUERYTHREAD_H

#include <QThread>
#include <QSqlQuery>

//��ֹ��ѯ����̫��ʱ��ɵ�UI���������ʹ���߳�����ѯ
class QueryThread : public QThread
{
	Q_OBJECT

private:
	QString sqlWords;
	QSqlQuery query;

public:
	QueryThread();
	~QueryThread();
	//����ѯ�ַ������ݹ���
	void setSqlWords(QString _sqlWords);

signals:
	//��ѯ���֮�����źţ������ֵ����ȥ
	void queryFinished(QSqlQuery*);

protected:
	void run();
};

#endif