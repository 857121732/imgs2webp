#ifndef CREATEWEBP_H
#define CREATEWEBP_H

#include <QtWidgets/QMainWindow>
#include "ui_createwebp.h"

class CreateWebp : public QMainWindow
{
	Q_OBJECT

public:
	CreateWebp(QWidget *parent = 0);
	~CreateWebp();

private:
	Ui::CreateWebpClass ui;
};

#endif // CREATEWEBP_H
