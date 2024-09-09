//
//  User.h
//  Project 2
//
//  Created by Miranda Chavez on 4/23/24.
//

#ifndef User_h
#define User_h
#include <iostream>
using namespace std;
class User{
protected:
    int *userHP;
    int *userHPT;
    int *goldPoints;
    int *userATT;
    int *userAC;
    int quota = 1000;
    int* roll;
    int choice;

public:
    User(); //default constructor with userName “Unknown”, stats are nullptrs
    int getUserHP();
    int getGoldPoints();
    int getUserATT();
    int getUserAC();
    int getUserHPT();
    void setUserHP(int);
    void setGoldPoints(int);
    void setUserATT(int);
    void setUserAC(int);
    void setUserHPT(int);

};

#endif /* User_h */
