//
//  Item.cpp
//  Project 2
//
//  Created by Miranda Chavez on 4/23/24.
//

#include "Item.h"
#include <iostream>
using namespace std;

Item::Item(){
    itemName = "Blank";
    worth = 0;
} //default constructor with itemName “Blank” and worth 0

Item::Item (string name, int gold){
    itemName = name;
    worth = gold;
}//overloaded constructor with assigned itemName and worth

void Item::checkInfo(){
    cout << itemName << " is worth " << worth << " gold" << endl;
} //checks gold pieces

void Item::addGold(User you){
    *goldPoints += worth;
    you.setGoldPoints(*goldPoints);
    cout << worth << " gold added to GP." << endl;
}
