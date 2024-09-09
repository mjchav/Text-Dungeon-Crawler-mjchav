//
//  Action.h
//  Project 2
//
//  Created by Miranda Chavez on 4/29/24.
//

#ifndef Action_h
#define Action_h
#include "Orc.h"
#include "Skeleton.h"
#include "Ghoul.h"
#include "Chainmail.h"
#include "Leather.h"
#include "Plate.h"
#include "Halberd.h"
#include "Longsword.h"
#include "Greataxe.h"
#include "Save.h"
#include <iostream>
using namespace std;

class Action : public Orc, public Skeleton, public Ghoul, public Save{
protected:
public:
    void startGame(User);
    void move(User, string); //choose direction to move, calls check()
    void check(User, string); //rolls dice to determine loot type or monster encounter(rolling a 1)
    void checkInv(User); //checks health, gold, items
    void GameOver(User, string); //asks user if they want to continue
    void QuotaMet(); //asks user if they want to continue
    void EndGame();
    void gameLoop(User, string);
};

#endif /* Action_h */
