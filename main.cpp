#include "gitpractice.h"
#include <QtWidgets/QApplication>
#include <QDebug>
#include <QList>
#include <QMap>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QString str = QObject::tr("Hello Qt");
	
	QMap<QString, QString> map;
	map.insert("Hello", "Qt");
	map.insert("Hello", "World");

	qDebug() << "test";

	qDebug() << "Test merge";

	GitPractice w;
	w.show();
	return a.exec();
}
