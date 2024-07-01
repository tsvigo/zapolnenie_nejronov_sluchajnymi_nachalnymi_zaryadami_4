#ifndef CLASS_SINAPS_H
#define CLASS_SINAPS_H

#endif // CLASS_SINAPS_H
///////////////////////////////////////////////////////
// свой код:

class Synaps //[i]
{            // свойства:
public:
  //      Номер синапса [0]  --- номер первого слоя [1]
  // --- номер нейрона в первом слое [2]   ----  номер выхода нейрона [3]
  //  ------ номер второго слоя  [4]  ----номер нейрона во втором слое [5]
  //--- номер входа нейрона [6]
  // int Chto_Soediniaet_Sinaps[7] ;
  int Nomer_Sinapsa; // надо посчитать ///////////    10100
  int Nomer_Sloia;   //?   1 2 3
  int Nomer_Neirona; // от 1 до 201
  int Nomer_Vhoda;   //  1 и 2
  int Nomer_Vyhoda = 1;

  int Peremennaia_Poriadkovyi_Nomer_Sinapsa;

  static                                            // unsigned
      int Peremennaia_Soprotivlenie_Sinapsa[10105]; // вес

public:
  Synaps(int Nomer_Sinapsa, int Nomer_Sloia, int Nomer_Neirona, int Nomer_Vhoda,
         int Nomer_Vyhoda);
  // конструктор
  ~Synaps(); // деструктор
};
