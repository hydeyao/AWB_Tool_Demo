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

    //��
    int Width;
    //��
    int Height;
    //OB
    int OB;
    //��ͼ��ʽ
    int Format;
    //roi
    double Roi;
    //ͼƬ·��
    QString strFilePath;
private:
    Ui::AWB_ToolClass ui;
    //��ȡ�������
    void getUIParams();

    void ReadPic2Arr();

    void Write2File(QString file_path, unsigned char* buf, int size);
private slots:
    //���㰴ť����ִ�вۺ���
    void slt_calPushBtnPressed();

    //���߰�ťִ�вۺ��� ��ȡ�ļ�·��
    void slt_toolBtnPressed();

};
