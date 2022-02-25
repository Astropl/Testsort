#include "testsort.h"
#include "ui_testsort.h"
#include "iostream"
#include <QDebug>
#include <cstdlib>


using namespace std;



//deklaracja tabeli
int tabNoSort [9], tabSort[9] ;
int liczba, liczbaNieSort, liczbaSort;



TestSort::TestSort(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TestSort)
{
    ui->setupUi(this);
    modelListaNieSort = new QStringListModel(this);
}

TestSort::~TestSort()
{
    delete ui;
}

void TestSort::InitWindow ()
{
    //inicjalizacja okna
}

int TestSort::MakeTabble (int liczba)
{

   QString QLiczba = (QString::number(liczba));


    ui->listaNieSort->append(QLiczba);

    //return liczba;
    return 0;
}


void TestSort::on_btnLosuj_clicked()
{ cout<<"Losuj" <<endl;
    for (int i=0;i<=9;i++)
    {liczba = rand();
        cout<<liczba <<endl;
        tabNoSort[i]=liczba;

        MakeTabble(liczba);




    }
}

void TestSort::on_btnSort_clicked()
{cout<<"Sortuj" <<endl;
    for (int i=0;i<=9 ;i++ ) {

        //liczbaNieSort = ui->listaNieSort->toPlainText().at(i);
        liczbaNieSort = tabNoSort[i];
        QString QLiczbaNieSort = (QString::number(liczbaNieSort));
cout<<QLiczbaNieSort.toStdString()<<endl;

         ui->listaSort->append(QLiczbaNieSort);
}
         // babelkowy

         for (int i = 0;i<9 ;i++ ) {
              QString pierwszyCheck = ui->listaSort->toPlainText();
//QString pierwszyCheck1=ui->listaSort->text();
              cout<<pierwszyCheck.toStdString()<<endl;
             QString pierwszy = ui->listaSort->toPlainText().at(i);
cout<<"Pierwszy " << pierwszy.toStdString() <<endl;
              QString drugi = ui->listaSort->toPlainText().at(i+1);

              cout<<"Drugi " << drugi.toStdString() <<endl;
             QString temp;
             if (drugi<pierwszy)
             {
                 temp = pierwszy;
                 pierwszy = drugi;
             drugi = temp;
             ui->listaSort->append(pierwszy);
             ui->listaSort->append(drugi);
             }



    }
}
