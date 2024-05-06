#ifndef CLASS_NEIRON_H
#define CLASS_NEIRON_H

#endif // CLASS_NEIRON_H
/////////////////////////////////////////////////////////////////
// свой код:
///////////////////////////////////////////////////////
class Neiron //[i]
{
  //////////////////////////////////////////////////////////////////
  // свойства - переменные:
  //////////////////////////////////////////////////////////////////
public:
  // переменная порядковый номер нейрона
  // static
  int Peremennaia_Poriadkovyi_Nomer_Neirona;
  //     "E:\images\нейронная сеть 4.rif"
  // переменная Заряд Нейрона:
public:
  static

      unsigned long long
          Peremennaia_Zariad_Neirona //[
                                     // Peremennaia_Poriadkovyi_Nomer_Neirona];
              [251]; // индекс это порядковый номер
                     // нейрона Переменная
                     // Изменение подстроечного
                     // заряда (веса) синапса:
  // static int Peremennaia_Podstroechnyi_Zariad_Sinapsa[10105];
  //    Переменная -Заряд пробития Нейрона:
  int Peremennaia_Zariad_Probitiia_Neirona;
  //      Переменная -Число входов Нейрона:
  int Peremennaia_Chislo_Vhodov_Neirona;
  ///   Переменная -Принадлежность Нейрона слою
  signed char Peremennaia_Prinadlezhnost__Neirona_Sloiu;
  // Переменная -Число выходов Нейрона
  signed char Peremennaia_Chislo_Vyhodov_Neirona;
  //  int // static
  //      //      C*U=Q
  //      yomkosty =
  //          // random (100)
  //      Random(100),
  //      napriajenie =
  //          // random (100)
  //      Random(100),
  //      zariad_odnoy_obkladki = napriajenie * yomkosty / 2;
  //////////////////////////////////////////////////////

public: // методы-функции:
        // void Poluchenie_zariada_ot_signala();
  // void Delenie_zariada();
  //       вычисления заряда выхода
  //  Функция вычисления заряда выхода нейрона:
  void
  Funktciia_Vychisleniia_Zariada_Vyhoda_Neirona(); // функция решения
                                                   //-------------------------------------------------
                                                   // Todo Функция получения
                                                   // нейроном заряда из файла:
  void Funktciia_Polucheniia_Neironom_Zariada_Iz_Faila();
  // Todo Функция начального заполнения нейронов зарядами: -  Random?
  void Funktciia_Nachalnogo_Zapolneniia_Neironov_Zariadami();
  // Функция начального заполнения подстроечных зарядов (весов):
  // подстроечные заряды принадлежат синапсам
  // int R =  randomize();
  // int R =  randomize();
  //	void	 Funktciia_Zapolnit_Sishapsy_Nachalnymi_Sluchainymi_Zariadami()
  //;
  //////////////////////////////////////////////////////

  // Вложенные классы:

  // Вход нейрона
  class Vhod_Neirona {};
  //   Нейрон Входа
  class Neiron_Vhoda {};
  //    Нейрон выхода
  class Neiron_Vyhoda {};
  //  Нейрон скрытого слоя
  class Neiron_Skrytogo_Sloia {};

  //   Выход нейрона
  class Vyhod_Neirona {};
  //////////////////////////////////////////////////////
public:
  Neiron(int Zariad, int Peremennaia_Zariad_Probitiia_Neirona); // конструктор
  ~Neiron(); // деструктор
};
