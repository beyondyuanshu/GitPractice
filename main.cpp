#include "gitpractice.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GitPractice w;
	w.show();
	return a.exec();
}
