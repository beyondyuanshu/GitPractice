#ifndef GITPRACTICE_H
#define GITPRACTICE_H

#include <QtWidgets/QMainWindow>
#include "ui_gitpractice.h"

class GitPractice : public QMainWindow
{
	Q_OBJECT

public:
	GitPractice(QWidget *parent = 0);
	~GitPractice();

private:
	Ui::GitPracticeClass ui;
};

#endif // GITPRACTICE_H
