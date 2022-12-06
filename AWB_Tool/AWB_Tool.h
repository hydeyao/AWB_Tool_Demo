#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AWB_Tool.h"
#include <qfile.h>

enum FORMAT
{
    RGGB = 0,
    GRBG = 1,
    BGGR = 2,
    GBRG =3
};


class AWB_Tool : public QMainWindow
{
    Q_OBJECT

public:
    AWB_Tool(QWidget *parent = nullptr);
    ~AWB_Tool();

    //宽
    int Width;
    //高
    int Height;
    //OB
    int OB;
    //出图格式
    int Format;
    //roi
    double Roi;
    //图片路径
    QString strFilePath;
private:
    Ui::AWB_ToolClass ui;
    //获取界面参数
    void getUIParams();

    void ReadPic2Arr();

    void Write2File(QString file_path, unsigned char* buf, int size);
private slots:
    //计算按钮按下执行槽函数
    void slt_calPushBtnPressed();

    //工具按钮执行槽函数 获取文件路径
    void slt_toolBtnPressed();

};
