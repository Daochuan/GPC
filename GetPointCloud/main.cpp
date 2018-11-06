#include "GetPointCloud.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GetPointCloud w;
	w.show();
	return a.exec();
}
