#ifndef ACTIVITYWINDOW_H
#define ACTIVITYWINDOW_H
#include <QDialog>

namespace Ui {
class ActivityWindow;
}

class ActivityWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ActivityWindow(QWidget *parent = 0);
    ~ActivityWindow();

private:
    Ui::ActivityWindow *ui;
};

#endif // ACTIVITYWINDOW_H
