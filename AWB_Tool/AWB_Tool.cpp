#include "AWB_Tool.h"
#include <qpushbutton.h>
#include <qfiledialog.h>
#include <qfile.h>

AWB_Tool::AWB_Tool(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.Cal_pushButton, &QPushButton::pressed, this, &AWB_Tool::slt_calPushBtnPressed);
    connect(ui.toolButton, &QPushButton::pressed, this, &AWB_Tool::slt_toolBtnPressed);
}

AWB_Tool::~AWB_Tool()
{}

void AWB_Tool::getUIParams()
{
    Width = ui.width_lineEdit->text().toInt();
    Height = ui.height_lineEdit->text().toInt();
    OB = ui.ob_lineEdit->text().toInt();
    Format = ui.formnat_comboBox->currentIndex();
    Roi = ui.roi_doubleSpinBox->value();
    strFilePath = ui.lineEdit->text();
}

void AWB_Tool::ReadPic2Arr()
{
    FILE* pfile;
    fopen_s(&pfile, strFilePath.toStdString().c_str(), "rb");
    if (!pfile)
    {
        return;
    }

    unsigned char* pbuff = new unsigned char[Width * Height];
    fread(pbuff, 1, Width * Height, pfile);
    fclose(pfile);

#if 0
    QFile file(strFilePath);
    file.open(QFile::ReadOnly);
    if (!file.isOpen()) {
        
        return;
    }
    QByteArray buff = file.readAll();
    unsigned char* pucBuff = (unsigned char *)buff.data();
#endif
    
    unsigned char* Rbuff = new unsigned char[Width * Height / 4];
    unsigned char* Grbuff = new unsigned char[Width * Height / 4];
    unsigned char* Gbuff = new unsigned char[Width * Height / 4];
    unsigned char* Buff = new unsigned char[Width * Height / 4];

    int idx = 0;
    for (size_t Row = 0; Row < Height; Row+=2)
    {
        for (size_t Cols = 0; Cols < Width;Cols+=2)
        {
            Rbuff[idx] = pbuff[Row * Width + Cols];
            Grbuff[idx] = pbuff[Row * Width + (Cols + 1)];
            Gbuff[idx] = pbuff[(Row+ 1) * Width + (Cols)];
            Buff[idx] = pbuff[(Row + 1) * Width + (Cols + 1)];
            idx++;
        }

    }


    Write2File("D:\\Res\\Rchanle.raw", Rbuff, Width * Height / 4);
    Write2File("D:\\Res\\Grchanle.raw", Grbuff, Width * Height / 4);
    Write2File("D:\\Res\\Gbchanle.raw", Gbuff, Width * Height / 4);
    Write2File("D:\\Res\\Bchanle.raw", Buff, Width * Height / 4);

    delete[] Rbuff;
    delete[] Grbuff;
    delete[] Gbuff;
    delete[] Buff;
    delete[] pbuff;

}

void AWB_Tool::Write2File(QString file_path, unsigned char* buf, int size)
{
    QFile file;
    file.setFileName(file_path);
    file.open(QFile::WriteOnly);
    if (!file.isOpen())
    {
        return;
    }

    file.write((char*)buf, size);
    file.close();
}

void AWB_Tool::slt_toolBtnPressed()
{
    QString file_name = QFileDialog::getOpenFileName(nullptr, "Open a raw file", "D:\\", "*.raw");
    ui.lineEdit->setText(file_name);
}

void AWB_Tool::slt_calPushBtnPressed()
{
    getUIParams();
    ReadPic2Arr();
}
