//
//  Weapon.cpp
//  Project 2
//
//  Created by Miranda Chavez on 4/23/24.
//

#include "Weapon.h"
#include <iostream>
using namespace std;

Weapon::Weapon() : Item(){
    adjATT = 0;
} //user item default constructor and sets adjATT to 0

Weapon::Weapon(string name, int gold, int att) : Item(name, gold){
    adjATT = att;
} //uses Item(string, int), assigns adjATT

void Weapon::equipWeapon(User you){
    you.setUserATT(getAdjATT());
}//sets userATT to adjATT

void Weapon::checkInfo(){
    cout << itemName << " deals " << getAdjATT() << " attack and is worth " << worth << " gold." << endl;
}//displays weapon info while overriding checkInfo

int Weapon::getAdjATT(){return adjATT;}//returns adjATT

