//
//  Chainmail.h
//  Project 2
//
//  Created by Miranda Chavez on 4/23/24.
//

#ifndef Chainmail_h
#define Chainmail_h
#include "Armor.h"
#include <iostream>
using namespace std;

class Chainmail : public Armor{
public:
    Chainmail() : Armor("Chainmail", 80, 16, 20){} // from Item(string, int): itemName ”Chainmail”, worth 80, from Armor(int, int): adjAC 16, adjHP 20
};

#endif /* Chainmail_h */
