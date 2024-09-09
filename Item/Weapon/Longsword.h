//
//  Longsword.h
//  Project 2
//
//  Created by Miranda Chavez on 4/23/24.
//

#ifndef Longsword_h
#define Longsword_h
#include "Weapon.h"
#include <iostream>
using namespace std;

class Longsword : public Weapon {
public:
    Longsword() : Weapon("Longsword", 20, 12){}; // from Item(string, int): itemName “Longsword”, worth 20, from Weapon(int): adjATT 12
};

#endif /* Longsword_h */
