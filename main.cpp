#include "createwebp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CreateWebp w;
	w.show();
	return a.exec();
}
