//
//  Save.h
//  Project 2
//
//  Created by Miranda Chavez on 4/23/24.
//

#ifndef Save_h
#define Save_h
#include "User.h"
#include <iostream>
using namespace std;

class Save : virtual public User {
protected:
    string filename;
public:
    Save(); //default constructor, writes file with filename “Blank”
    void SaveGame(string, User); //writes file with filename, user stats, quota, and rooms
    void Load(User, string);
};

#endif /* Save_h */
