//
//  Armor.h
//  Project 2
//
//  Created by Miranda Chavez on 4/23/24.
//

#ifndef Armor_h
#define Armor_h
#include "Item.h"
#include <iostream>
using namespace std;
class Armor : public Item{

protected:
    int adjAC;
    int adjHP;

public:
    Armor(); //uses Item(), adjAC 0, adjHP 0
    Armor(string, int, int, int); // uses Item(string, int), assigned adjAC and adjHP
    void equipArmor(User);// virtual function, adjusts userHP, userHPT and userAC
    void checkInfo(); //overrides check info, checks AC and adjHP
    int getAdjAC();
    int getAdjHP();

};

#endif /* Armor_h */
