//
//  Weapon.h
//  Project 2
//
//  Created by Miranda Chavez on 4/23/24.
//

#ifndef Weapon_h
#define Weapon_h
#include "Item.h"
#include <iostream>
using namespace std;

class Weapon : public Item{
protected:
    int adjATT;
public:
    Weapon(); //uses Item(), adjATT 0
    Weapon(string, int, int); //uses Item(string, int), assigned adjATT
    void equipWeapon(User);//virtual function, adjusts userATT
    void checkInfo(); //overrides check info, checks AC and adjHP
    int getAdjATT();
};

#endif /* Weapon_h */
