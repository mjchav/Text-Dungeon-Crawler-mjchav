//
//  Item.h
//  Project 2
//
//  Created by Miranda Chavez on 4/23/24.
//

#ifndef Item_h
#define Item_h
#include <iostream>
#include "User.h"
using namespace std;
class Item : virtual public User{
protected:
    string itemName; //item name;
    int worth; //item’s worth in gold pieces
    
public:
    Item(); //default constructor with itemName “Blank”
    Item (string, int); //overloaded constructor with assigned itemName and worth
    void checkInfo(); //checks gold pieces
    void addGold(User);
};


#endif /* Item_h */
