//
//  Greataxe.h
//  Project 2
//
//  Created by Miranda Chavez on 4/23/24.
//

#ifndef Greataxe_h
#define Greataxe_h
#include "Weapon.h"
#include <iostream>
using namespace std;

class Greataxe : public Weapon {
public:
    Greataxe() : Weapon("Greataxe", 60, 16){} // from Item(string, int): itemName “Greataxe”, worth 60, from Weapon(int): adjATT 16
};

#endif /* Greataxe_h */
