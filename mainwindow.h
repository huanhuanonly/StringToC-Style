#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QSlider>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    struct StringToCStyle
    {
        // 多行显示
        bool AutoLinebreak = true;
        // 文本模式
        enum class EnumTextMode : int
        {
            UseText = 0,
            UseHex  = 16,
            UseOct  = 8
        }TextMode = EnumTextMode::UseText;
        // 转换 % 号为 %%
        bool PercentSign = false;
        // 解释换行符
        enum class EnumLinebreakMode : int
        {
            InheritSource = 0,
            N              = 1,
            RN             = 2
        }LineBreakMode = EnumLinebreakMode::InheritSource;
        
    }StringToCStyle;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    
    QString Generate(const QString& lpInputString);
    QByteArray Generate(const QByteArray& lpInputString);
    
private slots:
    void on_InputBrowseButton_clicked();

    void on_OutputBrowseButton_clicked();

    void on_Generate_clicked();

    void on_GenerateInClipButton_clicked();
    
    void on_GenerateInQuickBox_clicked();
    
    void on_InputPathBox_currentIndexChanged(int index);
    
    void on_FontSizeVSlider_valueChanged(int value);
    
private:
    QLabel* Logbox;
    QSlider* OpacitySlider;
    QPushButton* TopmostButton;
    
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
