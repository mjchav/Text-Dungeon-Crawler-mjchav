//
//  Armor.cpp
//  Project 2
//
//  Created by Miranda Chavez on 4/23/24.
//

#include "Armor.h"
#include <iostream>
using namespace std;

Armor::Armor() : Item(){//armor default constructor, initiates Item(), and adjAC and adjHP is set to 0
    adjAC = 0;
    adjHP = 0;
}

Armor::Armor(string name, int gold, int aac, int ahp) : Item(name, gold){//overloaded constructor, sets name, gold, adjAC, and adjHP to specified values
    adjAC = aac;
    adjHP = ahp;
}

void Armor::equipArmor(User you){ //user equpis armor
    if(you.getUserHPT() != 80){//if user's total hp isn't 80 (default total hp), calculates difference to add/remove
        if((you.getUserHPT() - 80) < getAdjHP()){//if user's previous armor ac is less than the current armor, adds the difference of the two armors' acs to the uesr's health and total health
            you.setUserHP(you.getUserHP() + (getAdjHP() - (you.getUserHPT() - 80)));//HP += adjHP - (HPT - 80(previous armor's adjHP))
            you.setUserHPT(you.getUserHPT() + (getAdjHP() - (you.getUserHPT() - 80)));
        }
        else{//if user's previous armor ac is higher than current armor, subtracts the difference of the two armors' acs from the user's health and total health
            you.setUserHP(you.getUserHP() - ((you.getUserHPT()-80) - getAdjHP()));//HP -= adjHP - (HPT - 80(previous armor's adjHP))
        }
    }
    else{//if user's total hp is default, adds adjHP
        you.setUserHP(you.getUserHP() + getAdjHP());
        you.setUserHPT(you.getUserHPT() + getAdjHP());
    }
    you.setUserAC(getAdjAC());
}

void Armor::checkInfo(){
 cout << itemName << " has an Armor Class of " << adjAC << ", adds " << adjHP << " to your Health, and is worth " << worth << " gold." << endl;
 } //overrides check info, checks AC and adjHP

int Armor::getAdjAC(){return adjAC;}
int Armor::getAdjHP(){return adjHP;}
