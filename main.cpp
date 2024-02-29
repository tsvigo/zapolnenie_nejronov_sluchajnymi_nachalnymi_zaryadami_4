#include "Dialog.h"

#include <QApplication>
// свои заголовки:
#include <QFile>
#include <QFileInfo>
#include <QProcess>
#include <QRandomGenerator>
#include <QThread>
//#include <QSound>
#include <QTextStream>
#include <random.hpp> // надо копировать в папку программы

#include "Class_Neiron.h"
#include "Class_Sinaps.h"
#include "klass_neyronnaya_sety.h"
// ..............................................
// Три заголовка выше просто скопировал из отличения 1 -4
////////////////////////////////////////////////////////////////////////////
// включаем заголовки и копируем их в папку программы из
// /home/tsvigo/my_projects_qt_2/otlichenie_edinitcy_4_qmake_dialog/

// глобальные переменные
unsigned long long Neiron::Peremennaia_Zariad_Neirona[202] =
    {}; // Определение переменной класса.
QString s = "";
QString file_suschestvuet = "";
using Random = effolkronium::random_static;
auto minVal = 0;
auto maxVal =0;
///////////////////////////////// родная функция:
///////////////////////////////////////////////////////////////////
int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  Dialog w;
  w.show();
  return a.exec();
}
//////////////////////////////// конец родной функции
///

///
/////////////////////////////////////////////////////////////////////
void Neyronnaya_sety::
    Funktciia_Zapolnit_Neirony_Nachalnymi_Sluchainymi_Zariadami() // определение
// функции
// заполнения нейронов начальными случайными зарядами
{

//  auto minVal = Random::min( );
//unsigned long long maxVal = Random::max( );
  //  QThread::sleep(2);
  // QThread::sleep(2);
  //
  //
  //
  QString path =
      "/home/viktor/my_projects_qt_2/"
      "build-zapolnenie_nejronov_sluchajnymi_nachalnymi_zaryadami_4-Desktop_Qt_"
      "5_12_12_GCC_64bit-Debug/neyroni.txt"; // Файл с начальными зарядами
                                             // нейронов//
  //
  // QThread::sleep(2);

  // проверка существования файла:
  QFileInfo check_file(path);
  // проверьте, существует ли файл, и если да: действительно ли это файл, а не
  // каталог?
  // if (check_file.exists() == false)
  // Если файла нет
  // {
  // Цикл
  for (int i = 0; i < 202; i++) { // начало цикла
    //
    int Peremennaia_Sluchainoe_Chislo =
	  //   QRandomGenerator::global()->bounded(0,  // 9223372036854775807//
	  //                                      16777215);
	  // старый генератор
	  //

	  Random::get(0, 2147483647);
			  //2147483648);
		//	  4294967295);
			  //18446744073709551615);
			  //16777215); - было // тут надо определить пределы. Нижний видимо 0 а верхний (максимум на моей машине 18446744073709551615
    //самое большое unsigned long long целое). Непонятно 
    // поменяем на новый генератор

    //     генерирует случайное число из указанного диапазона.
    // 0 - чёрный пиксель; 16777215 - белый пиксель
    // тут видимо только два цвета - чёрный и белый
    //
    /////////////// это не надо
    //////////////////////////////////////////////////////////////////////////////////////////////
    //    if (Peremennaia_Sluchainoe_Chislo <= 8388607) {
    //      Peremennaia_Sluchainoe_Chislo = 0; // чёрная точка
    //    } else
    //      Peremennaia_Sluchainoe_Chislo = 16777215; // белая точка

    /////////////////////////////////////////////////////////////////////////////////////////////////
    Neiron::Peremennaia_Zariad_Neirona[i] =
        Peremennaia_Sluchainoe_Chislo; // i - номер нейрона по порядку
    //
    // Тут видимо добавить число в массив
    int numbers_strings[203];

    numbers_strings[i] = Neiron::Peremennaia_Zariad_Neirona[i];
    s = s.append(QString::number(numbers_strings[i]));
    s = s.append("\n"); // перевод строки
                        //
  }                     // Конец цикла нейронов
  //
  // Записать строку в файл:
  //
  // Создаем объект класса QFile и связываем его с указанным именем
  //файла
  QString filename =
      "/home/viktor/my_projects_qt_2/"
      "build-zapolnenie_nejronov_sluchajnymi_nachalnymi_zaryadami_4-Desktop_"
      "Qt_5_12_12_GCC_64bit-Debug/neyroni.txt"; //
  QFile file(filename);
  // Открываем файл в режиме "Только для записи"
  if (file.open(QIODevice::WriteOnly)) { // Если открыли файл начало
    //
    QTextStream out(&file); // поток записываемых данных направляем в
    // файл
    // Для записи данных в файл используем оператор <<
    out << s;
    //
  } // Если открыли файл конец
  //
  // Видимо тут проверку сделать что не смогли открыть файл. Можно глобальную
  // переменную сделать что не смогли открыть.
  else {
    //  qWarning("Could not open file");  // Не могу открыть файл
  }
  //
  // Закрываем файл
  file.close();
  //
  //} // конец условия если файла нет
  //
  //
  // else
  {
    //"если файл существует то"
    // ui
    // Нужна переменная
    //  file_suschestvuet = "da";
    //
  }
  //
  // Звук:
  QProcess().execute("/home/viktor/Downloads/uvedomlen-korotkoe.mp3");
  // /home/viktor/Downloads/uvedomlen-korotkoe.mp3
} // Конец функции
