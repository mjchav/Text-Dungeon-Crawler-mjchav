//
//  Save.cpp
//  Project 2
//
//  Created by Miranda Chavez on 4/23/24.
//

#include "Save.h"
#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;

Save::Save(){//default constructor
    filename = "Blank";
}

void Save::SaveGame(string name, User you){//saves user's game by writing user information to a fhile
    if(filename == name){//if the file already exists, clears file before writing more information to file
        ofstream fout(filename);
        filesystem::resize_file(filename, 0);
        fout.seekp(0);

        fout << you.getUserHP() << endl;
        fout << you.getUserHPT() << endl;
        fout << you.getGoldPoints() << endl;
        fout << you.getUserATT() << endl;
        fout << you.getUserAC() << endl;
        
        fout.close();
    }
    
    else{//writes following information to file
        filename = name;
        ofstream fout(filename);
        fout << 80 << endl;
        fout << 80 << endl;
        fout << 0 << endl;
        fout << 10 << endl;
        fout << 10 << endl;
        
        fout.close();
    }
    
    
}

void Save::Load(User you, string name){//reads variables from file and sets them to user's variables
    filename = name;
    ifstream fin(filename);
    if(!fin.is_open()){
        cout << "File not found!" << endl;
        exit(6);
    }
    int uHP, uHPT, GP, uAC, Att;
    fin >> uHP;
    fin >> uHPT;
    fin >> GP;
    fin >> Att;
    fin >> uAC;
    
    you.setUserHP(uHP);
    you.setUserHPT(uHPT);
    you.setGoldPoints(GP);
    you.setUserAC(uAC);
    you.setUserATT(Att);
    
    fin.close();
}
