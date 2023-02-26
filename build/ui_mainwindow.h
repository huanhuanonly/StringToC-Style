/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoverain;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout;
    QLabel *InputLabel;
    QComboBox *InputPathBox;
    QToolButton *InputBrowseButton;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *OutputLabel;
    QComboBox *OutputPathBox;
    QToolButton *OutputBrowseButton;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QCheckBox *OutputToInputpath;
    QCheckBox *OutputToClipboard;
    QLCDNumber *WordCount;
    QWidget *widget_11;
    QGridLayout *gridLayout_3;
    QSlider *FontSizeVSlider;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *AutoLinebreak;
    QRadioButton *NotAutoLinebreak;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *PercentSignButton;
    QRadioButton *NotPercentSignButton;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *UseHexButton;
    QRadioButton *UseOctButton;
    QRadioButton *UseTextButton;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *LinebreakModeRN;
    QRadioButton *LinebreakModeN;
    QRadioButton *LinebreakModeDef;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *UnicodeButton;
    QRadioButton *AnsiButton;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_5;
    QPlainTextEdit *QuickTextEdit;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *copyright;
    QWidget *widget_9;
    QGridLayout *gridLayout_2;
    QPushButton *Generate;
    QLabel *hotkey_middle;
    QPushButton *GenerateInClipButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *hotkey_left;
    QSpacerItem *horizontalSpacer_4;
    QLabel *hotkey_right;
    QPushButton *GenerateInQuickBox;
    QMenuBar *menubar;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        QFont font;
        font.setFamily(QString::fromUtf8("Cascadia Mono"));
        MainWindow->setFont(font);
        MainWindow->setWindowOpacity(1.000000000000000);
        actionLoverain = new QAction(MainWindow);
        actionLoverain->setObjectName(QString::fromUtf8("actionLoverain"));
        actionLoverain->setCheckable(true);
        actionLoverain->setChecked(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout = new QHBoxLayout(widget_7);
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        InputLabel = new QLabel(widget_7);
        InputLabel->setObjectName(QString::fromUtf8("InputLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InputLabel->sizePolicy().hasHeightForWidth());
        InputLabel->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Cascadia Mono"));
        font1.setPointSize(12);
        InputLabel->setFont(font1);

        horizontalLayout->addWidget(InputLabel);

        InputPathBox = new QComboBox(widget_7);
        InputPathBox->setObjectName(QString::fromUtf8("InputPathBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(InputPathBox->sizePolicy().hasHeightForWidth());
        InputPathBox->setSizePolicy(sizePolicy1);
        InputPathBox->setMinimumSize(QSize(0, 20));
        InputPathBox->setMaximumSize(QSize(16777215, 25));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Cascadia Mono"));
        font2.setBold(false);
        InputPathBox->setFont(font2);

        horizontalLayout->addWidget(InputPathBox);

        InputBrowseButton = new QToolButton(widget_7);
        InputBrowseButton->setObjectName(QString::fromUtf8("InputBrowseButton"));

        horizontalLayout->addWidget(InputBrowseButton);


        verticalLayout_6->addWidget(widget_7);

        widget_8 = new QWidget(centralwidget);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_2 = new QHBoxLayout(widget_8);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        OutputLabel = new QLabel(widget_8);
        OutputLabel->setObjectName(QString::fromUtf8("OutputLabel"));
        sizePolicy.setHeightForWidth(OutputLabel->sizePolicy().hasHeightForWidth());
        OutputLabel->setSizePolicy(sizePolicy);
        OutputLabel->setFont(font1);

        horizontalLayout_2->addWidget(OutputLabel);

        OutputPathBox = new QComboBox(widget_8);
        OutputPathBox->setObjectName(QString::fromUtf8("OutputPathBox"));

        horizontalLayout_2->addWidget(OutputPathBox);

        OutputBrowseButton = new QToolButton(widget_8);
        OutputBrowseButton->setObjectName(QString::fromUtf8("OutputBrowseButton"));

        horizontalLayout_2->addWidget(OutputBrowseButton);


        verticalLayout_6->addWidget(widget_8);

        widget_5 = new QWidget(centralwidget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        OutputToInputpath = new QCheckBox(widget_5);
        OutputToInputpath->setObjectName(QString::fromUtf8("OutputToInputpath"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(OutputToInputpath->sizePolicy().hasHeightForWidth());
        OutputToInputpath->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(OutputToInputpath);

        OutputToClipboard = new QCheckBox(widget_5);
        OutputToClipboard->setObjectName(QString::fromUtf8("OutputToClipboard"));
        sizePolicy2.setHeightForWidth(OutputToClipboard->sizePolicy().hasHeightForWidth());
        OutputToClipboard->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(OutputToClipboard);

        WordCount = new QLCDNumber(widget_5);
        WordCount->setObjectName(QString::fromUtf8("WordCount"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Cascadia Mono"));
        font3.setPointSize(9);
        WordCount->setFont(font3);
        WordCount->setSmallDecimalPoint(false);
        WordCount->setDigitCount(36);
        WordCount->setMode(QLCDNumber::Dec);
        WordCount->setSegmentStyle(QLCDNumber::Filled);
        WordCount->setProperty("value", QVariant(0.000000000000000));
        WordCount->setProperty("intValue", QVariant(0));

        horizontalLayout_3->addWidget(WordCount);


        verticalLayout_6->addWidget(widget_5);

        widget_11 = new QWidget(centralwidget);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        gridLayout_3 = new QGridLayout(widget_11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        FontSizeVSlider = new QSlider(widget_11);
        FontSizeVSlider->setObjectName(QString::fromUtf8("FontSizeVSlider"));
        FontSizeVSlider->setMinimum(6);
        FontSizeVSlider->setMaximum(50);
        FontSizeVSlider->setPageStep(3);
        FontSizeVSlider->setValue(9);
        FontSizeVSlider->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(FontSizeVSlider, 0, 2, 2, 1);

        groupBox = new QGroupBox(widget_11);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        AutoLinebreak = new QRadioButton(widget);
        AutoLinebreak->setObjectName(QString::fromUtf8("AutoLinebreak"));
        AutoLinebreak->setEnabled(true);
        AutoLinebreak->setFont(font1);
        AutoLinebreak->setMouseTracking(true);
        AutoLinebreak->setCheckable(true);
        AutoLinebreak->setChecked(true);
        AutoLinebreak->setAutoRepeat(false);
        AutoLinebreak->setAutoExclusive(true);

        verticalLayout->addWidget(AutoLinebreak);

        NotAutoLinebreak = new QRadioButton(widget);
        NotAutoLinebreak->setObjectName(QString::fromUtf8("NotAutoLinebreak"));
        NotAutoLinebreak->setEnabled(true);
        NotAutoLinebreak->setFont(font1);
        NotAutoLinebreak->setMouseTracking(true);
        NotAutoLinebreak->setCheckable(true);
        NotAutoLinebreak->setChecked(false);
        NotAutoLinebreak->setAutoRepeat(false);
        NotAutoLinebreak->setAutoExclusive(true);

        verticalLayout->addWidget(NotAutoLinebreak);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        widget_3 = new QWidget(groupBox);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        PercentSignButton = new QRadioButton(widget_3);
        PercentSignButton->setObjectName(QString::fromUtf8("PercentSignButton"));
        PercentSignButton->setEnabled(true);
        PercentSignButton->setFont(font1);
        PercentSignButton->setMouseTracking(true);
        PercentSignButton->setCheckable(true);
        PercentSignButton->setChecked(false);
        PercentSignButton->setAutoRepeat(false);
        PercentSignButton->setAutoExclusive(true);

        verticalLayout_3->addWidget(PercentSignButton);

        NotPercentSignButton = new QRadioButton(widget_3);
        NotPercentSignButton->setObjectName(QString::fromUtf8("NotPercentSignButton"));
        NotPercentSignButton->setEnabled(true);
        NotPercentSignButton->setFont(font1);
        NotPercentSignButton->setMouseTracking(true);
        NotPercentSignButton->setCheckable(true);
        NotPercentSignButton->setChecked(true);
        NotPercentSignButton->setAutoRepeat(false);
        NotPercentSignButton->setAutoExclusive(true);

        verticalLayout_3->addWidget(NotPercentSignButton);


        gridLayout->addWidget(widget_3, 0, 1, 1, 1);

        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        UseHexButton = new QRadioButton(widget_2);
        UseHexButton->setObjectName(QString::fromUtf8("UseHexButton"));
        UseHexButton->setEnabled(true);
        UseHexButton->setFont(font1);
        UseHexButton->setMouseTracking(true);
        UseHexButton->setCheckable(true);
        UseHexButton->setChecked(false);
        UseHexButton->setAutoRepeat(false);
        UseHexButton->setAutoExclusive(true);

        verticalLayout_2->addWidget(UseHexButton);

        UseOctButton = new QRadioButton(widget_2);
        UseOctButton->setObjectName(QString::fromUtf8("UseOctButton"));
        UseOctButton->setEnabled(true);
        UseOctButton->setFont(font1);
        UseOctButton->setMouseTracking(true);
        UseOctButton->setCheckable(true);
        UseOctButton->setChecked(false);
        UseOctButton->setAutoRepeat(false);
        UseOctButton->setAutoExclusive(true);

        verticalLayout_2->addWidget(UseOctButton);

        UseTextButton = new QRadioButton(widget_2);
        UseTextButton->setObjectName(QString::fromUtf8("UseTextButton"));
        UseTextButton->setEnabled(true);
        UseTextButton->setFont(font1);
        UseTextButton->setMouseTracking(true);
        UseTextButton->setCheckable(true);
        UseTextButton->setChecked(true);
        UseTextButton->setAutoRepeat(false);
        UseTextButton->setAutoExclusive(true);

        verticalLayout_2->addWidget(UseTextButton);


        gridLayout->addWidget(widget_2, 1, 0, 1, 1);

        widget_4 = new QWidget(groupBox);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        LinebreakModeRN = new QRadioButton(widget_4);
        LinebreakModeRN->setObjectName(QString::fromUtf8("LinebreakModeRN"));
        LinebreakModeRN->setEnabled(true);
        LinebreakModeRN->setFont(font1);
        LinebreakModeRN->setMouseTracking(true);
        LinebreakModeRN->setCheckable(true);
        LinebreakModeRN->setChecked(false);
        LinebreakModeRN->setAutoRepeat(false);
        LinebreakModeRN->setAutoExclusive(true);

        verticalLayout_4->addWidget(LinebreakModeRN);

        LinebreakModeN = new QRadioButton(widget_4);
        LinebreakModeN->setObjectName(QString::fromUtf8("LinebreakModeN"));
        LinebreakModeN->setEnabled(true);
        LinebreakModeN->setFont(font1);
        LinebreakModeN->setMouseTracking(true);
        LinebreakModeN->setCheckable(true);
        LinebreakModeN->setChecked(false);
        LinebreakModeN->setAutoRepeat(false);
        LinebreakModeN->setAutoExclusive(true);

        verticalLayout_4->addWidget(LinebreakModeN);

        LinebreakModeDef = new QRadioButton(widget_4);
        LinebreakModeDef->setObjectName(QString::fromUtf8("LinebreakModeDef"));
        LinebreakModeDef->setEnabled(true);
        LinebreakModeDef->setFont(font1);
        LinebreakModeDef->setMouseTracking(true);
        LinebreakModeDef->setCheckable(true);
        LinebreakModeDef->setChecked(true);
        LinebreakModeDef->setAutoRepeat(false);
        LinebreakModeDef->setAutoExclusive(true);

        verticalLayout_4->addWidget(LinebreakModeDef);


        gridLayout->addWidget(widget_4, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 2, 1);

        groupBox_2 = new QGroupBox(widget_11);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(groupBox_2);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        verticalLayout_5 = new QVBoxLayout(widget_6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        UnicodeButton = new QRadioButton(widget_6);
        UnicodeButton->setObjectName(QString::fromUtf8("UnicodeButton"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Cascadia Mono"));
        font4.setPointSize(14);
        font4.setItalic(true);
        UnicodeButton->setFont(font4);
        UnicodeButton->setChecked(true);

        verticalLayout_5->addWidget(UnicodeButton);

        AnsiButton = new QRadioButton(widget_6);
        AnsiButton->setObjectName(QString::fromUtf8("AnsiButton"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Cascadia Mono"));
        font5.setPointSize(14);
        font5.setBold(false);
        font5.setItalic(true);
        AnsiButton->setFont(font5);

        verticalLayout_5->addWidget(AnsiButton);


        horizontalLayout_4->addWidget(widget_6);


        gridLayout_3->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(widget_11);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        QuickTextEdit = new QPlainTextEdit(groupBox_3);
        QuickTextEdit->setObjectName(QString::fromUtf8("QuickTextEdit"));
        QuickTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        QuickTextEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        QuickTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);
        QuickTextEdit->setCursorWidth(3);
        QuickTextEdit->setCenterOnScroll(false);

        horizontalLayout_5->addWidget(QuickTextEdit);


        gridLayout_3->addWidget(groupBox_3, 1, 1, 1, 1);


        verticalLayout_6->addWidget(widget_11);

        widget_10 = new QWidget(centralwidget);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        sizePolicy1.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy1);
        horizontalLayout_6 = new QHBoxLayout(widget_10);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        copyright = new QLabel(widget_10);
        copyright->setObjectName(QString::fromUtf8("copyright"));
        sizePolicy2.setHeightForWidth(copyright->sizePolicy().hasHeightForWidth());
        copyright->setSizePolicy(sizePolicy2);
        QFont font6;
        font6.setFamily(QString::fromUtf8("Cascadia Mono"));
        font6.setPointSize(7);
        font6.setBold(false);
        font6.setItalic(true);
        copyright->setFont(font6);

        horizontalLayout_6->addWidget(copyright);


        verticalLayout_6->addWidget(widget_10);

        widget_9 = new QWidget(centralwidget);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        gridLayout_2 = new QGridLayout(widget_9);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Generate = new QPushButton(widget_9);
        Generate->setObjectName(QString::fromUtf8("Generate"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Generate->sizePolicy().hasHeightForWidth());
        Generate->setSizePolicy(sizePolicy3);
        Generate->setMinimumSize(QSize(300, 0));
        Generate->setMaximumSize(QSize(500, 16777215));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Cascadia Mono"));
        font7.setPointSize(24);
        font7.setBold(false);
        font7.setItalic(false);
        Generate->setFont(font7);

        gridLayout_2->addWidget(Generate, 0, 2, 1, 3);

        hotkey_middle = new QLabel(widget_9);
        hotkey_middle->setObjectName(QString::fromUtf8("hotkey_middle"));
        sizePolicy2.setHeightForWidth(hotkey_middle->sizePolicy().hasHeightForWidth());
        hotkey_middle->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(hotkey_middle, 1, 3, 1, 1);

        GenerateInClipButton = new QPushButton(widget_9);
        GenerateInClipButton->setObjectName(QString::fromUtf8("GenerateInClipButton"));
        sizePolicy3.setHeightForWidth(GenerateInClipButton->sizePolicy().hasHeightForWidth());
        GenerateInClipButton->setSizePolicy(sizePolicy3);
        GenerateInClipButton->setMaximumSize(QSize(200, 16777215));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Cascadia Mono"));
        font8.setPointSize(10);
        font8.setBold(false);
        font8.setItalic(false);
        font8.setUnderline(false);
        font8.setStrikeOut(false);
        font8.setKerning(true);
        GenerateInClipButton->setFont(font8);

        gridLayout_2->addWidget(GenerateInClipButton, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(80, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        hotkey_left = new QLabel(widget_9);
        hotkey_left->setObjectName(QString::fromUtf8("hotkey_left"));
        sizePolicy2.setHeightForWidth(hotkey_left->sizePolicy().hasHeightForWidth());
        hotkey_left->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(hotkey_left, 1, 1, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 6, 1, 1);

        hotkey_right = new QLabel(widget_9);
        hotkey_right->setObjectName(QString::fromUtf8("hotkey_right"));
        sizePolicy2.setHeightForWidth(hotkey_right->sizePolicy().hasHeightForWidth());
        hotkey_right->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(hotkey_right, 1, 5, 1, 1);

        GenerateInQuickBox = new QPushButton(widget_9);
        GenerateInQuickBox->setObjectName(QString::fromUtf8("GenerateInQuickBox"));
        sizePolicy3.setHeightForWidth(GenerateInQuickBox->sizePolicy().hasHeightForWidth());
        GenerateInQuickBox->setSizePolicy(sizePolicy3);
        GenerateInQuickBox->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(GenerateInQuickBox, 0, 5, 1, 1);


        verticalLayout_6->addWidget(widget_9);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuAbout->menuAction());
        menuAbout->addSeparator();
        menuAbout->addAction(actionLoverain);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "lr - StringToC-Style", nullptr));
        actionLoverain->setText(QCoreApplication::translate("MainWindow", "\347\274\226\345\206\231\344\272\216 2023\342\200\216\345\271\264\342\200\2161\342\200\216\346\234\210\342\200\21627\342\200\216\346\227\245\357\274\214\342\200\217\342\200\21621:41:55  -\346\235\250\346\254\242\346\254\242\344\275\234", nullptr));
#if QT_CONFIG(tooltip)
        actionLoverain->setToolTip(QCoreApplication::translate("MainWindow", "\347\274\226\345\206\231\344\272\216 2023\342\200\216\345\271\264\342\200\2161\342\200\216\346\234\210\342\200\21627\342\200\216\346\227\245\357\274\214\342\200\217\342\200\21621:41:55  -\346\235\250\346\254\242\346\254\242\344\275\234", nullptr));
#endif // QT_CONFIG(tooltip)
        InputLabel->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245", nullptr));
#if QT_CONFIG(tooltip)
        InputPathBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        InputBrowseButton->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\350\276\223\345\205\245\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        InputBrowseButton->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        OutputLabel->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        OutputPathBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        OutputBrowseButton->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\350\276\223\345\207\272\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        OutputBrowseButton->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        OutputToInputpath->setText(QCoreApplication::translate("MainWindow", "\346\233\277\346\215\242\350\276\223\345\205\245\346\226\207\344\273\266", nullptr));
        OutputToClipboard->setText(QCoreApplication::translate("MainWindow", "\345\220\214\346\227\266\350\276\223\345\207\272\345\210\260\345\211\252\350\264\264\346\235\277", nullptr));
#if QT_CONFIG(tooltip)
        WordCount->setToolTip(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\346\226\207\344\273\266\347\232\204\345\244\247\345\260\217\357\274\210\345\255\227\350\212\202\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        FontSizeVSlider->setToolTip(QCoreApplication::translate("MainWindow", "\346\213\226\345\212\250\344\273\245\350\260\203\346\225\264\345\277\253\351\200\237\350\275\254\346\215\242\345\214\272\347\232\204\345\255\227\344\275\223\345\244\247\345\260\217\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        AutoLinebreak->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
        NotAutoLinebreak->setText(QCoreApplication::translate("MainWindow", "\344\273\205\344\270\200\350\241\214", nullptr));
#if QT_CONFIG(tooltip)
        PercentSignButton->setToolTip(QCoreApplication::translate("MainWindow", "\345\272\224\347\224\250\344\272\216C\350\257\255\350\250\200\346\240\274\345\274\217\345\214\226\345\255\227\347\254\246\344\270\262", nullptr));
#endif // QT_CONFIG(tooltip)
        PercentSignButton->setText(QCoreApplication::translate("MainWindow", "\345\260\206 % \350\275\254\346\210\220 %%", nullptr));
        NotPercentSignButton->setText(QCoreApplication::translate("MainWindow", "\344\270\215\350\277\233\350\241\214\350\275\254\346\215\242", nullptr));
        UseHexButton->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\203\250\344\275\277\347\224\250\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        UseOctButton->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\203\250\344\275\277\347\224\250\345\205\253\350\277\233\345\210\266", nullptr));
        UseTextButton->setText(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\250\346\272\220\346\226\207\346\234\254", nullptr));
        LinebreakModeRN->setText(QCoreApplication::translate("MainWindow", "\345\260\206\346\215\242\350\241\214\350\247\243\351\207\212\344\270\272\"\\r\\n\"", nullptr));
        LinebreakModeN->setText(QCoreApplication::translate("MainWindow", "\345\260\206\346\215\242\350\241\214\350\247\243\351\207\212\344\270\272'\\n'", nullptr));
        LinebreakModeDef->setText(QCoreApplication::translate("MainWindow", "\344\270\215\351\242\235\345\244\226\350\247\243\351\207\212", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_2->setToolTip(QCoreApplication::translate("MainWindow", "\350\257\267\345\207\206\347\241\256\347\232\204\346\214\207\345\256\232\344\275\277\347\224\250\347\232\204\347\274\226\347\240\201\357\274\214\345\220\246\350\200\205\345\217\257\350\203\275\344\271\261\347\240\201\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\347\240\201", nullptr));
#if QT_CONFIG(tooltip)
        UnicodeButton->setToolTip(QCoreApplication::translate("MainWindow", "UTF-8", nullptr));
#endif // QT_CONFIG(tooltip)
        UnicodeButton->setText(QCoreApplication::translate("MainWindow", "Unicode", nullptr));
#if QT_CONFIG(tooltip)
        AnsiButton->setToolTip(QCoreApplication::translate("MainWindow", "ANSI", nullptr));
#endif // QT_CONFIG(tooltip)
        AnsiButton->setText(QCoreApplication::translate("MainWindow", "ANSI", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\345\277\253\351\200\237\350\275\254\346\215\242\345\214\272", nullptr));
#if QT_CONFIG(tooltip)
        copyright->setToolTip(QCoreApplication::translate("MainWindow", "Copyright (c) 2022-2023 LoveRain Yanghuanhuan 3347484963@qq.com.  All rights reserved.", nullptr));
#endif // QT_CONFIG(tooltip)
        copyright->setText(QCoreApplication::translate("MainWindow", "Copyright (c) 2022-2023 LoveRain Yanghuanhuan 3347484963@qq.com.  All rights reserved.", nullptr));
#if QT_CONFIG(tooltip)
        Generate->setToolTip(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\250\344\273\245\344\270\212\351\200\211\351\241\271\345\222\214\350\256\276\347\275\256\345\274\200\345\247\213\350\247\243\351\207\212\345\271\266\347\224\237\346\210\220", nullptr));
#endif // QT_CONFIG(tooltip)
        Generate->setText(QCoreApplication::translate("MainWindow", "\347\224\237\346\210\220", nullptr));
#if QT_CONFIG(shortcut)
        Generate->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        hotkey_middle->setText(QCoreApplication::translate("MainWindow", "(Ctrl + R)", nullptr));
#if QT_CONFIG(tooltip)
        GenerateInClipButton->setToolTip(QCoreApplication::translate("MainWindow", "\344\273\216\345\211\252\350\264\264\346\235\277\344\270\255\350\216\267\345\217\226\346\226\207\346\234\254\357\274\214\350\275\254\346\215\242\345\220\216\350\276\223\345\207\272\345\210\260\345\211\252\350\264\264\346\235\277\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
        GenerateInClipButton->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\350\276\223\345\207\272\345\234\250\n"
"\345\211\252\350\264\264\346\235\277\344\270\255", nullptr));
#if QT_CONFIG(shortcut)
        GenerateInClipButton->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        hotkey_left->setText(QCoreApplication::translate("MainWindow", "(Ctrl+Shift+R)", nullptr));
        hotkey_right->setText(QCoreApplication::translate("MainWindow", "(Ctrl+Alt+R)", nullptr));
#if QT_CONFIG(tooltip)
        GenerateInQuickBox->setToolTip(QCoreApplication::translate("MainWindow", "\344\273\216\345\277\253\351\200\237\350\275\254\346\215\242\345\214\272\350\216\267\345\217\226\357\274\214\345\271\266\350\275\254\346\215\242\345\220\216\350\276\223\345\207\272\345\210\260\345\277\253\351\200\237\350\275\254\346\215\242\345\214\272", nullptr));
#endif // QT_CONFIG(tooltip)
        GenerateInQuickBox->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\350\276\223\345\207\272\345\234\250\n"
"\345\277\253\351\200\237\350\275\254\346\215\242\345\214\272", nullptr));
#if QT_CONFIG(shortcut)
        GenerateInQuickBox->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+R", nullptr));
#endif // QT_CONFIG(shortcut)
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "\346\201\213\351\233\250\350\256\276\350\256\241(&lr)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
