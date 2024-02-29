// 1
#include <QString>
#ifndef KLASS_NEYRONNAYA_SETY_H
#define KLASS_NEYRONNAYA_SETY_H

#endif                // KLASS_NEYRONNAYA_SETY_H
class Neyronnaya_sety //[i]с.
{                     // свойства:

public:
  ////////////////////////////////////////////////////////////////////////////////////
  // вложенные классы
  ////////////////////////////////////////////////////////////////////////////////////

  //  3
  class Neyron {}; // вложенный класс
                   // 2
  class Sinaps {}; // вложенный класс

  ////////////////////////////////////////////////////////////////////////////////////
  // функции:
  ////////////////////////////////////////////////////////////////////////////////////
  // Функция подачи сигналов на вход:
  static void Funktciia_Podachi_Signalov_Na_Vhod(); // 3
  //	{
  //	  ;; // or any other code
  //	  // считывание данных из файла
  //
  //	}
  // }
  ;
  static void Funktciia_Obucheniia(); // 9
  // шаблон функции:
  /////              void func ()
  // {  // функция
  //  cout << "Функция очень хороший инструмент в программировании";
  //  cout << "С помощью его можно улучшить свой уровень программирования";
  //     }
  //// вызов:
  //  func ()
  // Функция решения:
  static void Funktciia_Resheniia(); // 6

  // Функция Заполнить нейроны начальными случайными зарядами
  // todo
  static void
  Funktciia_Zapolnit_Neirony_Nachalnymi_Sluchainymi_Zariadami(); // 1
  /// Функция заполнить синапсы начальными случайными зарядами - подстроечные
  /// (веса)

  // функция заполнения нейронов зарядами из файла
  static void Funktciia_Zapolneniia_Neironov_Iz_Faila(); // 4

  // функция заполнения синапсов зарядами из файла
  static void Funktciia_Zapolneniia_Sinapsov_Iz_Faila(); // 5

  //    Функция_Заполнения_Сопротивлений_Синапсов_Случайными_Начальными_Значениями:

  static void
  Funktciia_Zapolneniia_Soprotivlenii_Sinapsov_Sluchainymi_Nachalnymi_Znacheniiami(); // 2

  // функция активации:

  static void Funktciia_Aktivatcii(); // 7
  // функция проверки ошибки:
  static void Funktciia_Proverki_Oshibki(); //    8

  // функция отображения решения:
  static void Funktciia_Otobrazheniia_Resheniia(); // 10

  // конец функций
  ///////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////////////////
  // переменные:
  ////////////////////////////////////////////////////////////////////////////////////

  // 	static  //unsigned
  //	int Peremennaia_Soprotivlenie_Sinapsa  [10105];   // вес

  //                 static
  //             int Peremennaia_Zariad_Neirona //[
  //             Peremennaia_Poriadkovyi_Nomer_Neirona];
  //	[202];    // индекс это порядковый номер нейрона
  // количество слоёв:
  int Svoistvo_Kolichestvo_sloyov = 3;
  // -Строение сети - просто описание словами AnsiString
  QString Stroenie_seti = "";
  // Переменная число нейронов в сети:
  int Peremennaia_Chislo_Neironov_V_Seti = 201;
  // число синапсов в сети:   (10100)
  int Peremennaia_Chislo_Sinapsov_V_Seti = 10100;
  // переменная число нейронов в первом слое     (Todo)
  int Peremennaia_Chislo_Neironov_V_Pervom_Sloe = 100;
  // Переменная_Число_Входов_Синапсов_На_Один_Нейрон_В_Первом_Слое:
  int Peremennaia_Chislo_Vhodov_Sinapsov_Na_Odin_Neiron_V_Pervom_Sloe = 1;
  // Переменная_Число_Выходов_Синапсов_На_Один_Нейрон_В_Первом_Слое:
  int Peremennaia_Chislo_Vyhodov_Sinapsov_Na_Odin_Neiron_V_Pervom_Sloe = 100;
  // переменная число нейронов во втором слое:
  int Peremennaia_Chislo_Neironov_Vo_Vtorom_Sloe = 100;
  // Переменная_Число_Входов_Синапсов_На_Один_Нейрон_Во_Втором_Слое:
  int Peremennaia_Chislo_Vhodov_Sinapsov_Na_Odin_Neiron_Vo_Vtorom_Sloe = 100;
  // Переменная_Число_Выходов_Синапсов_На_Один_Нейрон_Во_Втором_Слое:
  int Peremennaia_Chislo_Vyhodov_Sinapsov_Na_Odin_Neiron_Vo_Vtorom_Sloe = 1;
  // переменная число нейронов в третьем слое:
  int Peremennaia_Chislo_Neironov_V_Tretem_Sloe = 1;
  // Переменная_Число_Входов_Синапсов_На_Один_Нейрон_В_Третьем_Слое:
  int Peremennaia_Chislo_Vhodov_Sinapsov_Na_Odin_Neiron_V_Tretem_Sloe = 100;
  // Переменная_Число_Выходов_Синапсов_На_Один_Нейрон_В_Третьем_Слое:
  int Peremennaia_Chislo_Vyhodov_Sinapsov_Na_Odin_Neiron_V_Tretem_Sloe = 1;
  // QString s = "";

public:
  Neyronnaya_sety();
  // конструктор
  ~Neyronnaya_sety(); // деструктор
};
