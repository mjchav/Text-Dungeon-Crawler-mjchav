//
//  User.cpp
//  Project 2
//
//  Created by Miranda Chavez on 4/23/24.
//

#include "User.h"
#include <iostream>
#include <random>
using namespace std;

User::User() : userHP(new int(80)), userHPT(new int(80)), goldPoints(new int(0)), userAC(new int(10)), roll(new int(0)), userATT(new int(10)){//user default constructor
    choice = 0;
}

//getters and setters for userHP, goldPoints, userATT, userAC, and userHPT vvvvv
int User::getUserHP(){return *userHP;}
int User::getGoldPoints(){return *goldPoints;}
int User::getUserATT(){return *userATT;}
int User::getUserAC(){return *userAC;}
int User::getUserHPT(){return *userHPT;}

void User::setUserHP(int num){
    *userHP = num;
}

void User::setGoldPoints(int num){
    *goldPoints += num;
}

void User::setUserATT(int num){
    *userATT = num;
}

void User::setUserAC(int num){
    *userAC = num;
}

void User::setUserHPT(int num){
    *userHPT = num;
}
