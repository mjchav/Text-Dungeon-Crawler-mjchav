//
//  Halberd.h
//  Project 2
//
//  Created by Miranda Chavez on 4/23/24.
//

#ifndef Halberd_h
#define Halberd_h
#include "Weapon.h"
#include <iostream>
using namespace std;

class Halberd : public Weapon {
public:
    Halberd() : Weapon("Halberd", 40, 14){} // from Item(string, int): itemName “Halberd”, worth 40, from Weapon(int): adjATT 14

};

#endif /* Halberd_h */
