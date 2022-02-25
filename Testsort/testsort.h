#ifndef TESTSORT_H
#define TESTSORT_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QStringListModel>

QT_BEGIN_NAMESPACE
namespace Ui { class TestSort; }
QT_END_NAMESPACE

class TestSort : public QMainWindow
{
    Q_OBJECT

public:
    TestSort(QWidget *parent = nullptr);
    ~TestSort();

private:
    Ui::TestSort *ui;

public:
    void InitWindow ();


    int MakeTabble (int liczba);

private slots:

    void on_btnLosuj_clicked();
    void on_btnSort_clicked();


private:

    // QStandardItemModel *modelListaNieSort;
     QStringListModel *modelListaNieSort;
     QStringList listaNieSort;
};
#endif // TESTSORT_H
