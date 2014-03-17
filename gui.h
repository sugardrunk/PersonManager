#ifndef GUI_H
#define GUI_H

#include <QMainWindow>
#include <QListWidget>
#include "student.h"
#include "lecturer.h"


namespace Ui
{
    class Gui;
}

class Gui : public QMainWindow
{
    Q_OBJECT

public:
    explicit Gui(QWidget *parent = 0);
     ~Gui();

    struct holder
    {
        Student *s;
        Lecturer *l;
    };

private slots:
    void updateList(holder t, bool check);
    void on_addStudentButton_clicked();
    void on_addLecturerButton_clicked();
    void on_listWidget_clicked(const QModelIndex &index);
    void on_deleteButton_clicked();
    void on_modifyButton_clicked();

private:
    Ui::Gui *ui;

    QList<holder> list;
    QListWidget *listWidget;
    QString temp;

    holder h;
    int listIndex;
    bool ok;
};

#endif // GUI_H
