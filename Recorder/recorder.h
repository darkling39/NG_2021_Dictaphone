#ifndef RECORDER_H
#define RECORDER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Recorder; }
QT_END_NAMESPACE

class Recorder : public QMainWindow
{
    Q_OBJECT

public:
    Recorder(QWidget *parent = nullptr);
    ~Recorder();

private:
    Ui::Recorder *ui;
};
#endif // RECORDER_H
