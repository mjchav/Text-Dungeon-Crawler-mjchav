//
//  Plate.h
//  Project 2
//
//  Created by Miranda Chavez on 4/23/24.
//

#ifndef Plate_h
#define Plate_h
#include "Armor.h"
#include <iostream>
using namespace std;
class Plate : public Armor{
public:
    Plate() : Armor("Plate", 200, 18, 40){} // from Item(string, int): itemName “Plate”, worth 200, from Armor(int, int), adjAC 18, adjHP 40
};

#endif /* Plate_h */
