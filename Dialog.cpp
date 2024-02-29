#include "Dialog.h"
#include "klass_neyronnaya_sety.h"
#include "ui_Dialog.h"
// #include </home/viktor/my_projects_qt_2/zapolnenie_nejronov_sluchajnymi_nachalnymi_zaryadami_4/random.hpp>
extern QString file_suschestvuet;
extern int minVal;
extern unsigned long long maxVal;
Dialog::Dialog(QWidget *parent) : QDialog(parent), ui(new Ui::Dialog) {
  ui->setupUi(this);
}

Dialog::~Dialog() { delete ui; }

void Dialog::on_pushButton_clicked() {
  Neyronnaya_sety::
      Funktciia_Zapolnit_Neirony_Nachalnymi_Sluchainymi_Zariadami(); ///
  //      Использование-вызов
  // if (file_suschestvuet == "da") ui->label->text() = "Файл уже существует.";
  if (file_suschestvuet == "da")
    ui->label->setText("Файл уже существует.");
  else
    ui->label->setText("Файл cоздан.");
  ;
  ;
}

void Dialog::on_pushButton_2_clicked()
{
//ui->lineEdit ->setText(QString::number(minVal));
ui->lineEdit ->setText(QString::number(maxVal));
}

