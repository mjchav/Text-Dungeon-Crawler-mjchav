//
//  Leather.h
//  Project 2
//
//  Created by Miranda Chavez on 4/23/24.
//

#ifndef Leather_h
#define Leather_h
#include "Armor.h"
#include <iostream>
using namespace std;

class Leather : public Armor {
public:
    Leather() : Armor("Leather", 40, 14, 10){} // from Item(string, int): itemName “Leather”, worth 40, from Armor(int, int): adjAC 14, adj HP 10

};

#endif /* Leather_h */
