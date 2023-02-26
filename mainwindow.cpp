#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QFileDialog>
#include <QClipboard>
#include <QTextCodec>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    Logbox = new QLabel(tr("选择配置后点击“生成”开始转换。如遇乱码请更改编码。"), this);
    OpacitySlider = new QSlider(this);
    TopmostButton = new QPushButton(tr("顶置"), this);
    
    OpacitySlider->setMinimum(10);
    OpacitySlider->setMaximum(100);
    OpacitySlider->setValue(100);
    OpacitySlider->setToolTip(tr("设置窗口不透明度"));
    OpacitySlider->setOrientation(Qt::Horizontal);
    OpacitySlider->setMaximumWidth(90);
    OpacitySlider->setMinimumWidth(90);
    
    ui->statusbar->addWidget(Logbox);
    ui->statusbar->addPermanentWidget(OpacitySlider);
    ui->statusbar->addPermanentWidget(TopmostButton);
    
    connect(TopmostButton, &QPushButton::clicked, this, [&]()
    {
        if (TopmostButton->text() == tr("顶置"))
        {
            setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);
            TopmostButton->setText(tr("取消顶置"));
            
            if (!this->isVisible()) setVisible(true);
        }
        else
        {
            setWindowFlags(windowFlags() & ~Qt::WindowStaysOnTopHint);
            TopmostButton->setText(tr("顶置"));
            
            if (!this->isVisible()) setVisible(true);
        }
    });
    connect(OpacitySlider, &QSlider::valueChanged, this, [&](int value){
        setWindowOpacity(double(value) / 100);
    });
    
    connect(ui->AutoLinebreak, &QRadioButton::clicked, this, [&](bool b)
    {
        StringToCStyle.AutoLinebreak = b;
    });
    connect(ui->NotAutoLinebreak, &QRadioButton::clicked, this, [&](bool b)
    {
        StringToCStyle.AutoLinebreak = !b;
    });
    connect(ui->UseHexButton, &QRadioButton::clicked, this, [&]()
    {
        StringToCStyle.TextMode = StringToCStyle::EnumTextMode::UseHex;
    });
    connect(ui->UseOctButton, &QRadioButton::clicked, this, [&]()
    {
        StringToCStyle.TextMode = StringToCStyle::EnumTextMode::UseOct;
    });
    connect(ui->UseTextButton, &QRadioButton::clicked, this, [&]()
    {
        StringToCStyle.TextMode = StringToCStyle::EnumTextMode::UseText;
    });
    connect(ui->PercentSignButton, &QRadioButton::clicked, this, [&](bool b)
    {
        StringToCStyle.PercentSign = b;
    });
    connect(ui->NotPercentSignButton, &QRadioButton::clicked, this, [&](bool b)
    {
        StringToCStyle.PercentSign = !b;
    });
    connect(ui->LinebreakModeDef, &QRadioButton::clicked, this, [&]()
    {
        StringToCStyle.LineBreakMode = StringToCStyle::EnumLinebreakMode::InheritSource;
    });
    connect(ui->LinebreakModeRN, &QRadioButton::clicked, this, [&]()
    {
        StringToCStyle.LineBreakMode = StringToCStyle::EnumLinebreakMode::RN;
    });
    connect(ui->LinebreakModeN, &QRadioButton::clicked, this, [&]()
    {
        StringToCStyle.LineBreakMode = StringToCStyle::EnumLinebreakMode::N;
    });
    connect(ui->InputPathBox, &QComboBox::currentTextChanged, this, [&](QString newText){
        ui->InputPathBox->setToolTip(newText);
    });
    connect(ui->OutputPathBox, &QComboBox::currentTextChanged, this, [&](QString newText){
        ui->OutputPathBox->setToolTip(newText);
    });
    connect(ui->OutputToClipboard, &QCheckBox::clicked, this ,[&](bool b)
    {
        if (b)
        {
            if (ui->OutputToInputpath->checkState() == Qt::Unchecked || ui->InputPathBox->currentIndex() < 0)
            {
                ui->OutputPathBox->clear();
                ui->OutputPathBox->addItem(tr("仅输出到剪贴板"));
            }
        }
        else if (ui->OutputToInputpath->checkState() == Qt::Unchecked) ui->OutputPathBox->clear();
    });
    connect(ui->OutputToInputpath, &QCheckBox::clicked, this, [&](bool b)
    {
        if (b)
        {
            ui->OutputPathBox->clear();
            ui->OutputPathBox->addItem(ui->InputPathBox->currentText());
        }
        else
        {
            ui->OutputPathBox->clear();
            if (ui->OutputToClipboard->checkState() == Qt::Checked)
            {
                ui->OutputPathBox->addItem(tr("仅输出到剪贴板"));
            }
        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}


QString MainWindow::Generate(const QString& lpInputString)
{
    QString OutputString('\"');
    
    for (int i = 0; i < lpInputString.size(); ++i)
    {
        switch (lpInputString[i].unicode())
        {
        case '%':
            if (StringToCStyle.PercentSign == true) OutputString += '%';
            OutputString += lpInputString[i];
            break;
        case '\\':
        case '\"':
        case '\'':
            OutputString += '\\';
            OutputString += lpInputString[i];
            break;
        case '\r':
        case '\n':
            if (StringToCStyle.LineBreakMode == StringToCStyle::EnumLinebreakMode::InheritSource)
            {
                if (lpInputString[i] == '\r')
                {
                    OutputString += "\\r";
                    
                    if (lpInputString[i + 1] == '\n')
                    {
                        OutputString += "\\n";
                    }
                }
                else OutputString += "\\n";
            }
            else if (StringToCStyle.LineBreakMode == StringToCStyle::EnumLinebreakMode::N)
            {
                OutputString += "\\n";
            }
            else if (StringToCStyle.LineBreakMode == StringToCStyle::EnumLinebreakMode::RN)
            {
                OutputString += "\\r\\n";
            }
            
            if (lpInputString[i] == '\r' && lpInputString[i + 1] == '\n') ++i;
            
            if (StringToCStyle.AutoLinebreak == true)
            {
                OutputString += "\"\r\n\"";
            }
            break;
        default: OutputString += lpInputString[i];
        }
    }
    OutputString += '\"';
    
    return OutputString;
}


QByteArray MainWindow::Generate(const QByteArray& lpInputString)
{
    QByteArray OutputString("\"");
    
    if (StringToCStyle.TextMode == StringToCStyle::EnumTextMode::UseHex)
    {
        for (int i = 0; i < lpInputString.size(); ++i)
        {
            if (lpInputString.at(i) == '\r' && StringToCStyle.LineBreakMode == StringToCStyle::EnumLinebreakMode::N)
            {
                continue;
            }
            if (lpInputString.at(i) == '\n' && StringToCStyle.LineBreakMode == StringToCStyle::EnumLinebreakMode::RN && i && lpInputString.at(i - 1) != '\r')
            {
                OutputString.append("\\x");
                OutputString.append(QString("%1").arg((unsigned char)('\r'), 2, 16, QLatin1Char('0')).toUpper().toUtf8());
            }
            
            OutputString.append("\\x");
            OutputString.append(QString("%1").arg((unsigned char)(lpInputString.at(i)), 2, 16, QLatin1Char('0')).toUpper().toUtf8());
            
            if (lpInputString.at(i) == '%' && ui->PercentSignButton->isChecked() == true)
            {
                OutputString.append("\\x");
                OutputString.append(QString("%1").arg((unsigned char)(lpInputString.at(i)), 2, 16, QLatin1Char('0')).toUpper().toUtf8());
            }
            
            if (lpInputString.at(i) == '\n')
            {
                if (StringToCStyle.AutoLinebreak == true) OutputString.append("\"\n\"");
            }
        }
    }
    else if (StringToCStyle.TextMode == StringToCStyle::EnumTextMode::UseOct)
    {
        for (int i = 0; i < lpInputString.size(); ++i)
        {
            if (lpInputString.at(i) == '\r' && StringToCStyle.LineBreakMode == StringToCStyle::EnumLinebreakMode::N)
            {
                continue;
            }
            if (lpInputString.at(i) == '\n' && StringToCStyle.LineBreakMode == StringToCStyle::EnumLinebreakMode::RN && i && lpInputString.at(i - 1) != '\r')
            {
                OutputString.append("\\");
                OutputString.append(QString("%1").arg((unsigned char)('\r'), 3, 8, QLatin1Char('0')).toUpper().toUtf8());
            }
            
            OutputString.append("\\");
            OutputString.append(QString("%1").arg((unsigned char)(lpInputString.at(i)), 3, 8, QLatin1Char('0')).toUpper().toUtf8());
            
            if (lpInputString.at(i) == '%' && ui->PercentSignButton->isChecked() == true)
            {
                OutputString.append("\\");
                OutputString.append(QString("%1").arg((unsigned char)(lpInputString.at(i)), 3, 8, QLatin1Char('0')).toUpper().toUtf8());
            }
            
            if (lpInputString.at(i) == '\n')
            {
                if (StringToCStyle.AutoLinebreak == true) OutputString.append("\"\n\"");
            }
        }
    }
    OutputString.append('\"');
    
    return OutputString;
}


void MainWindow::on_InputBrowseButton_clicked()
{
    ui->InputPathBox->clear();
    QStringList filenames = QFileDialog::getOpenFileNames(this, "Select a file", ".", "TextFile (*.txt *.log *.c *.cpp *.h);;File (*.*)");
    
    
    if (filenames.length() > 1) for (int i = 0; i < filenames.length(); ++i)
    {
        ui->InputPathBox->addItem(QDir::toNativeSeparators(filenames.at(i)));
    }
    else if (filenames.length() == 1)
    {
        ui->InputPathBox->addItem(QDir::toNativeSeparators(filenames.at(0)));
        
        QDir dir(filenames.at(0));
        dir.cdUp();
    
        dir.setFilter(QDir::Files | QDir::NoDotAndDotDot);
        QFileInfoList list = dir.entryInfoList();
    
        for (int i = 0; i < list.length(); ++i)
        {
            if (filenames.at(0) != QDir::toNativeSeparators(list.at(i).absoluteFilePath()))
            {
                ui->InputPathBox->addItem(QDir::toNativeSeparators(list.at(i).absoluteFilePath()));
            }
        }
    }
    
    if (ui->OutputToInputpath->checkState() == Qt::Checked)
    {
        ui->OutputPathBox->clear();
        for (int i = 0; i < filenames.length(); ++i)
        {
            ui->OutputPathBox->addItem(QDir::toNativeSeparators(filenames[i]));
        }
    }
    
    QFile file(ui->InputPathBox->currentText());
    ui->WordCount->display(int(file.size()));
    return;
}


void MainWindow::on_OutputBrowseButton_clicked()
{
    ui->OutputToClipboard->setCheckState(Qt::Unchecked);
    ui->OutputToInputpath->setCheckState(Qt::Unchecked);
    
    ui->OutputPathBox->clear();
    QString path = QDir::toNativeSeparators(QFileDialog::getExistingDirectory(this, tr("Select a dir"), QDir::currentPath()));
    ui->OutputPathBox->addItem(path);
    
    QDir dir(path);
    dir.cdUp();

    dir.setFilter(QDir::NoDotAndDotDot | QDir::Dirs);
    QFileInfoList list = dir.entryInfoList();

    for (int i = 0; i < list.length(); ++i)
    {
        if (path != QDir::toNativeSeparators(list.at(i).absoluteFilePath()))
        {
            ui->OutputPathBox->addItem(QDir::toNativeSeparators(list.at(i).absoluteFilePath()));
        }
    }
    return;
}


void MainWindow::on_InputPathBox_currentIndexChanged(int index)
{
    QFile file(ui->InputPathBox->currentText());
    ui->WordCount->display(int(file.size()));
    return;
    index;
}


void MainWindow::on_Generate_clicked()
{
    if (StringToCStyle.TextMode == StringToCStyle::EnumTextMode::UseText)
    {
        QString InputString;
        
        if (ui->InputPathBox->currentIndex() >= 0)
        {
            QFile InputFile(ui->InputPathBox->currentText());
            if (InputFile.open(QIODevice::ReadOnly) == false)
            {
                Logbox->setText(QString("The input file failed to open: %1").arg(ui->InputPathBox->currentText()));
                return;
            }
            if (ui->AnsiButton->isChecked() == true)
            {
                QTextCodec *codec = QTextCodec::codecForName("GBK");
                InputString = codec->toUnicode(InputFile.readAll());
                
            }
            else InputString = InputFile.readAll();
        }
        else
        {
            Logbox->setText("Missing input file!");
            return;
        }
        QString OutputString = Generate(InputString);
        
        if (ui->OutputToInputpath->checkState() == Qt::Checked)
        {
            QFile OutputFile(ui->InputPathBox->currentText());
            if (OutputFile.open(QIODevice::WriteOnly | QIODevice::Truncate) == false)
            {
                Logbox->setText(QString("The output file failed to open: %1").arg(ui->OutputPathBox->currentText()));
                return;
            }
            
            if (ui->AnsiButton->isChecked() == true)
            {
                OutputFile.write(OutputString.toLocal8Bit());
            }
            else OutputFile.write(OutputString.toUtf8());
        }
        else if (ui->OutputPathBox->currentIndex() >= 0)
        {
            QFileInfo InputFileInfo(ui->InputPathBox->currentText());
            QFileInfo OutputFileInfo(ui->OutputPathBox->currentText());
            
            if (OutputFileInfo.isFile())
            {
                QFile OutputFile(ui->OutputPathBox->currentText());
                if (OutputFile.open(QIODevice::WriteOnly | QIODevice::Truncate) == false)
                {
                    Logbox->setText(QString("The output file failed to open: %1").arg(ui->OutputPathBox->currentText()));
                    return;
                }
                if (ui->AnsiButton->isChecked() == true)
                {
                    OutputFile.write(OutputString.toLocal8Bit());
                }
                else OutputFile.write(OutputString.toUtf8());
            }
            else if (OutputFileInfo.isDir())
            {
                QString OutputPath = ui->OutputPathBox->currentText() + QDir::toNativeSeparators("/") + QString("__") + InputFileInfo.fileName();
                
                QFile OutputFile(OutputPath);
                if (OutputFile.open(QIODevice::WriteOnly | QIODevice::Truncate) == false)
                {
                    Logbox->setText(QString("The output file failed to open: %1").arg(OutputPath));
                    return;
                }
                if (ui->AnsiButton->isChecked() == true)
                {
                    OutputFile.write(OutputString.toLocal8Bit());
                }
                else OutputFile.write(OutputString.toUtf8());
            }
        }
        
        if (ui->OutputToClipboard->checkState() == Qt::Checked)
        {
            QClipboard* cb = QApplication::clipboard();
            
            cb->setText(OutputString);
        }
    }
    else
    {
        QByteArray InputString;
        if (ui->InputPathBox->currentIndex() >= 0)
        {
            QFile InputFile(ui->InputPathBox->currentText());
            if (InputFile.open(QIODevice::ReadOnly) == false)
            {
                Logbox->setText(QString("The input file failed to open: %1").arg(ui->InputPathBox->currentText()));
                return;
            }
            InputString = InputFile.readAll();
        }
        else
        {
            Logbox->setText("Missing input file!");
            return;
        }
        
        if (ui->UnicodeButton->isChecked() == true)
        {
            InputString = QString(InputString).toLocal8Bit();
        }
        QByteArray OutputString = Generate(InputString);
        
        if (ui->UnicodeButton->isChecked() == true)
        {
            InputString = QString(InputString).toUtf8();
        }
        
        if (ui->OutputToInputpath->checkState() == Qt::Checked)
        {
            QFile OutputFile(ui->InputPathBox->currentText());
            if (OutputFile.open(QIODevice::WriteOnly | QIODevice::Truncate) == false)
            {
                Logbox->setText(QString("The output file failed to open: %1").arg(ui->OutputPathBox->currentText()));
                return;
            }
            
            OutputFile.write(OutputString);
        }
        else if (ui->OutputPathBox->currentIndex() >= 0)
        {
            QFileInfo InputFileInfo(ui->InputPathBox->currentText());
            QFileInfo OutputFileInfo(ui->OutputPathBox->currentText());
            
            if (OutputFileInfo.isFile())
            {
                QFile OutputFile(ui->OutputPathBox->currentText());
                if (OutputFile.open(QIODevice::WriteOnly | QIODevice::Truncate) == false)
                {
                    Logbox->setText(QString("The output file failed to open: %1").arg(ui->OutputPathBox->currentText()));
                    return;
                }
                OutputFile.write(OutputString);
            }
            else if (OutputFileInfo.isDir())
            {
                QString OutputPath = ui->OutputPathBox->currentText() + QDir::toNativeSeparators("/") + QString("__") + InputFileInfo.fileName();
                
                QFile OutputFile(OutputPath);
                if (OutputFile.open(QIODevice::WriteOnly | QIODevice::Truncate) == false)
                {
                    Logbox->setText(QString("The output file failed to open: %1").arg(OutputPath));
                    return;
                }
                OutputFile.write(OutputString);
            }
        }
        
        if (ui->OutputToClipboard->checkState() == Qt::Checked)
        {
            QClipboard* cb = QApplication::clipboard();
            
            cb->setText(OutputString);
        }
    }
    Logbox->setText(QString("Done"));
    return;
}


void MainWindow::on_GenerateInClipButton_clicked()
{
    QClipboard* cb = QApplication::clipboard();
    if (ui->UseTextButton->isChecked())
    {
        cb->setText(Generate(cb->text()));
    }
    else cb->setText(Generate(cb->text().toLocal8Bit()));
    
    Logbox->setText(QString("Done"));
    return;
}


void MainWindow::on_GenerateInQuickBox_clicked()
{
    QString str = ui->QuickTextEdit->toPlainText();
    ui->QuickTextEdit->clear();
    
    if (ui->UseTextButton->isChecked())
    {
        ui->QuickTextEdit->setPlainText(Generate(str));
    }
    else ui->QuickTextEdit->setPlainText(QString(Generate(str.toLocal8Bit())));
    
    return;
}

void MainWindow::on_FontSizeVSlider_valueChanged(int value)
{
    QFont font = ui->QuickTextEdit->font();
    font.setPointSize(value);
    ui->QuickTextEdit->setFont(font);
}

