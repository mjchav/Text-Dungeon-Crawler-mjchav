//
//  main.cpp
//  Project 2
//
//  Created by Miranda Chavez on 4/23/24.
//

#include <iostream>
using namespace std;
#include "Leather.h"
#include "Chainmail.h"
#include "Plate.h"
#include "Halberd.h"
#include "Longsword.h"
#include "Greataxe.h"
#include "Skeleton.h"
#include "Orc.h"
#include "Ghoul.h"
#include "Save.h"
#include "Action.h"

int main() {
    Action obj;//makes action object
    User you;//makes user object
    obj.startGame(you);//starts game loop
    
    return 0;
}
