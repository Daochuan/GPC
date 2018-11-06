#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GetPointCloud.h"

class GetPointCloud : public QMainWindow
{
	Q_OBJECT

public:
	GetPointCloud(QWidget *parent = Q_NULLPTR);

private:
	Ui::GetPointCloudClass ui;
};
