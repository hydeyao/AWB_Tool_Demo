/********************************************************************************
** Form generated from reading UI file 'AWB_Tool.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AWB_TOOL_H
#define UI_AWB_TOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AWB_ToolClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *width_lineEdit;
    QLabel *label_2;
    QLineEdit *height_lineEdit;
    QLabel *label_3;
    QLineEdit *ob_lineEdit;
    QLabel *label_4;
    QComboBox *formnat_comboBox;
    QDoubleSpinBox *roi_doubleSpinBox;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QToolButton *toolButton;
    QPushButton *Cal_pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AWB_ToolClass)
    {
        if (AWB_ToolClass->objectName().isEmpty())
            AWB_ToolClass->setObjectName(QString::fromUtf8("AWB_ToolClass"));
        AWB_ToolClass->resize(657, 519);
        centralWidget = new QWidget(AWB_ToolClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 70, 51, 16));
        width_lineEdit = new QLineEdit(centralWidget);
        width_lineEdit->setObjectName(QString::fromUtf8("width_lineEdit"));
        width_lineEdit->setGeometry(QRect(120, 70, 113, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 110, 51, 16));
        height_lineEdit = new QLineEdit(centralWidget);
        height_lineEdit->setObjectName(QString::fromUtf8("height_lineEdit"));
        height_lineEdit->setGeometry(QRect(120, 110, 113, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 170, 54, 12));
        ob_lineEdit = new QLineEdit(centralWidget);
        ob_lineEdit->setObjectName(QString::fromUtf8("ob_lineEdit"));
        ob_lineEdit->setGeometry(QRect(110, 160, 113, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 200, 54, 12));
        formnat_comboBox = new QComboBox(centralWidget);
        formnat_comboBox->addItem(QString());
        formnat_comboBox->addItem(QString());
        formnat_comboBox->addItem(QString());
        formnat_comboBox->addItem(QString());
        formnat_comboBox->setObjectName(QString::fromUtf8("formnat_comboBox"));
        formnat_comboBox->setGeometry(QRect(120, 200, 141, 22));
        roi_doubleSpinBox = new QDoubleSpinBox(centralWidget);
        roi_doubleSpinBox->setObjectName(QString::fromUtf8("roi_doubleSpinBox"));
        roi_doubleSpinBox->setGeometry(QRect(130, 240, 62, 22));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 250, 54, 12));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 300, 54, 12));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 300, 281, 20));
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(430, 310, 37, 18));
        Cal_pushButton = new QPushButton(centralWidget);
        Cal_pushButton->setObjectName(QString::fromUtf8("Cal_pushButton"));
        Cal_pushButton->setGeometry(QRect(540, 300, 75, 23));
        AWB_ToolClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AWB_ToolClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 657, 22));
        AWB_ToolClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AWB_ToolClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        AWB_ToolClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AWB_ToolClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        AWB_ToolClass->setStatusBar(statusBar);

        retranslateUi(AWB_ToolClass);

        QMetaObject::connectSlotsByName(AWB_ToolClass);
    } // setupUi

    void retranslateUi(QMainWindow *AWB_ToolClass)
    {
        AWB_ToolClass->setWindowTitle(QCoreApplication::translate("AWB_ToolClass", "AWB_Tool", nullptr));
        label->setText(QCoreApplication::translate("AWB_ToolClass", "Width", nullptr));
        label_2->setText(QCoreApplication::translate("AWB_ToolClass", "Height", nullptr));
        label_3->setText(QCoreApplication::translate("AWB_ToolClass", "OB", nullptr));
        label_4->setText(QCoreApplication::translate("AWB_ToolClass", "Format", nullptr));
        formnat_comboBox->setItemText(0, QCoreApplication::translate("AWB_ToolClass", "RGGB", nullptr));
        formnat_comboBox->setItemText(1, QCoreApplication::translate("AWB_ToolClass", "GRBG", nullptr));
        formnat_comboBox->setItemText(2, QCoreApplication::translate("AWB_ToolClass", "BGGR", nullptr));
        formnat_comboBox->setItemText(3, QCoreApplication::translate("AWB_ToolClass", "GBRG", nullptr));

        label_5->setText(QCoreApplication::translate("AWB_ToolClass", "Roi", nullptr));
        label_6->setText(QCoreApplication::translate("AWB_ToolClass", "Pic Path", nullptr));
        toolButton->setText(QCoreApplication::translate("AWB_ToolClass", "...", nullptr));
        Cal_pushButton->setText(QCoreApplication::translate("AWB_ToolClass", "Cal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AWB_ToolClass: public Ui_AWB_ToolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AWB_TOOL_H
