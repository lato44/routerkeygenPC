#ifndef UPDATEDIALOG_H
#define UPDATEDIALOG_H

#include <QDialog>

namespace Ui {
    class UpdateDialog;
}

class UpdateDialog : public QDialog {
    Q_OBJECT
public:
    UpdateDialog(QString url, QString version, QWidget *parent = 0);
    ~UpdateDialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::UpdateDialog *ui;
    QString url;

private slots:
    void openWebsite();
};

#endif // UPDATEDIALOG_H
