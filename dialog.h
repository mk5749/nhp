
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QCoreApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QFile>
QT_BEGIN_NAMESPACE
class QAction;
class QDialogButtonBox;
class QGroupBox;
class QLabel;
class QLineEdit;
class QMenu;
class QMenuBar;
class QPushButton;
class QTextEdit;
class QComboBox;
class QFile;
class QTextStream;

QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog();


private slots:
    void b_reset();
    void b_save();

private:
    void createHorizontalGroupBox();
    void createGridGroupBox();

    enum { NumGridRows = 10, NumButtons = 2 };

    QGroupBox *horizontalGroupBox;
    QGroupBox *gridGroupBox;

    QLabel *labels[NumGridRows];
    QLineEdit *playernames[NumGridRows];
    QPushButton *buttons[NumButtons];
    QComboBox *picks[10];
};

#endif // DIALOG_H
