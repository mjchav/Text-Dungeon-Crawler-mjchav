//
//  Action.cpp
//  Project 2
//
//  Created by Miranda Chavez on 4/29/24.
//

#include "Action.h"

#include <iostream>
#include <random>
using namespace std;

void Action::startGame(User you){ //starting menu
    cout << "Welcome to a Basic Dungeon Game!" << endl;
    cout << "----------------------------------" << endl;
    cout << "1. New Game" << endl;
    cout << "2. Load Game" << endl;
    cin >> choice;
    if(choice != 1 && choice != 2){
        while(choice != 1 && choice != 2){
            cout << "Invalid choice!" << endl;
            cout << "1. New Game" << endl;
            cout << "2. Load Game" << endl;
            cin >> choice;
        }
    }
    cout << "Enter your filename: ";
    cout << endl;
    string name;
    cin >> name;
    if(choice == 1){
        SaveGame(name, you);
        cout << endl;
        cout << "----------------------------------" << endl;
        cout << endl;
        cout << "You are a poor, weak, and unfortunate human." << endl;
        cout << "Due to the recent failure of your business, you find yourself trekking towards the entrance of a nearby dungeon, with but a dagger in your hand." << endl;
        cout << "\"Just 1000 gold... just 1000 gold is all I need to pay off my debt..!\" you tell yourself." << endl;
        cout << "Your hand shakes, but you know deep inside that you have no other choices, so you descend further." << endl;
        cout << endl;
        cout << "----------------------------------" << endl;
        cout << endl;
        gameLoop(you, name);
    }
    else if(choice == 2){
        Load(you, name);
        cout << endl;
        gameLoop(you, name);
    }
}

void Action::move(User you, string fName){//menu of choices you can make
    cout << "What would you like to do?" << endl;
    cout << "1. Continue onwards" << endl;
    cout << "2. Check your status" << endl;
    cout << "3. Save your game" << endl;
    cout << "4. End game" << endl;
    cin >> choice;
    if (choice != 1 && choice != 2 && choice != 3 && choice != 4){
        while (choice != 1 && choice != 2 && choice != 3 && choice != 4){
            cout << "Invalid choice!" << endl;
            cout << "What would you like to do?" << endl;
            cout << "1. Continue onwards" << endl;
            cout << "2. Check your status" << endl;
            cout << "3. Save your game" << endl;
            cout << "4. End game" << endl;
            cin >> choice;
        }
    }
    if (choice == 1){
        check(you, fName);
    }
    else if(choice == 2){
        checkInv(you);
    }
    else if(choice == 3){
        SaveGame(fName, you);
    }
    else if(choice == 4){
        EndGame();
    }
}

void Action::check(User you, string fName){//after choosing to move forward, you either encounter an enemy, an item, or nothing
    if(you.getGoldPoints() >= quota){
        quotaMet = true;
    }
    random_device rd;
    uniform_int_distribution<int> roll(0, 2);
    int monsOrLoot = roll(rd);
    if (monsOrLoot == 0){
        
        int monsType = roll(rd);
        if (monsType == 0){
            Orc orc;
            if(orc.battle(you)){
                GameOver(you, fName);
            }
        }
        else if (monsType == 1){
            Skeleton skelly;
            if(skelly.battle(you)){
                GameOver(you, fName);
            }
        }
        else {
            Ghoul ghoul;
            if(ghoul.battle(you)){
                GameOver(you, fName);
            }
        }
    }
    else if (monsOrLoot == 1){
        
        int lootType = roll(rd);
        if (lootType == 0){
            
            int armorType = roll(rd);
            if (armorType == 0){
                Chainmail chainmail;
                cout << "You found Chainmail Armor!" << endl;
                chainmail.checkInfo();
                cout << "Would you like to equip the armor?" << endl;
                cout << "1. Yes" << endl;
                cout << "2. No" << endl;
                cin >> choice;
                if(choice != 1 && choice != 2){
                    while(choice != 1 && choice != 2){
                        cout << "Invalid choice!" << endl;
                        cout << "Would you like to equip the armor?" << endl;
                        cout << "1. Yes" << endl;
                        cout << "2. No" << endl;
                        cin >> choice;
                    }
                }
                if (choice == 1){
                    chainmail.equipArmor(you);
                }
                else if (choice == 2){
                    chainmail.addGold(you);
                }
            }
            else if (armorType == 1){
                Leather leather;
                cout << "You found Leather Armor!" << endl;
                leather.checkInfo();
                cout << "Would you like to equip it?" << endl;
                cout << "1. Yes" << endl;
                cout << "2. No" << endl;
                cin >> choice;
                if(choice != 1 && choice != 2){
                    while(choice != 1 && choice != 2){
                        cout << "Invalid choice!" << endl;
                        cout << "Would you like to equip the armor?" << endl;
                        cout << "1. Yes" << endl;
                        cout << "2. No" << endl;
                        cin >> choice;
                    }
                }
                if (choice == 1){
                    leather.equipArmor(you);
                }
                else if (choice == 2){
                    leather.addGold(you);
                }
            }
            else{
                Plate plate;
                cout << "You found Plate Armor!" << endl;
                plate.checkInfo();
                cout << "Would you like to equip it?" << endl;
                cout << "1. Yes" << endl;
                cout << "2. No" << endl;
                cin >> choice;
                if(choice != 1 && choice != 2){
                    while(choice != 1 && choice != 2){
                        cout << "Invalid choice!" << endl;
                        cout << "Would you like to equip the armor?" << endl;
                        cout << "1. Yes" << endl;
                        cout << "2. No" << endl;
                        cin >> choice;
                    }
                }
                if (choice == 1){
                    plate.equipArmor(you);
                }
                else if (choice == 2){
                    plate.addGold(you);
                }
            }
        }
        else if(lootType == 1){
            int weaponType = roll(rd);
            if (weaponType == 0){
                Longsword longsword;
                cout << "You found a Longsword!" << endl;
                longsword.checkInfo();
                cout << "Would you like to equip it?" << endl;
                cout << "1. Yes" << endl;
                cout << "2. No" << endl;
                cin >> choice;
                if(choice != 1 && choice != 2){
                    while(choice != 1 && choice != 2){
                        cout << "Invalid choice!" << endl;
                        cout << "Would you like to equip the armor?" << endl;
                        cout << "1. Yes" << endl;
                        cout << "2. No" << endl;
                        cin >> choice;
                    }
                }
                if (choice == 1){
                    longsword.equipWeapon(you);
                }
                else if (choice == 2){
                    longsword.addGold(you);
                }
            }
            else if (weaponType == 1){
                Greataxe greataxe;
                cout << "You found a Greataxe!" << endl;
                greataxe.checkInfo();
                cout << "Would you like to equip it?" << endl;
                cout << "1. Yes" << endl;
                cout << "2. No" << endl;
                cin >> choice;
                if(choice != 1 && choice != 2){
                    while(choice != 1 && choice != 2){
                        cout << "Invalid choice!" << endl;
                        cout << "Would you like to equip the armor?" << endl;
                        cout << "1. Yes" << endl;
                        cout << "2. No" << endl;
                        cin >> choice;
                    }
                }
                if (choice == 1){
                    greataxe.equipWeapon(you);
                }
                else if (choice == 2){
                    greataxe.addGold(you);
                }
            }
            else{
                Halberd halberd;
                cout << "You found a Halberd!" << endl;
                halberd.checkInfo();
                cout << "Would you like to equip it?" << endl;
                cout << "1. Yes" << endl;
                cout << "2. No" << endl;
                cin >> choice;
                if(choice != 1 && choice != 2){
                    while(choice != 1 && choice != 2){
                        cout << "Invalid choice!" << endl;
                        cout << "Would you like to equip the armor?" << endl;
                        cout << "1. Yes" << endl;
                        cout << "2. No" << endl;
                        cin >> choice;
                    }
                }
                if (choice == 1){
                    halberd.equipWeapon(you);
                }
                else if (choice == 2){
                    halberd.addGold(you);
                }
            }
        }
        else{
            cout << "The darkness stretches beyond..." << endl;
            cout << endl;
        }
    }
}

void Action::checkInv(User you){//if you choose to check status, displays this v
    cout << "Health: " << you.getUserHP() << " HP" << endl;
    cout << "Total Health: " << you.getUserHPT() << endl;
    cout << "Gold: " << you.getGoldPoints() << " gold" << endl;
    cout << "Attack: " << you.getUserATT() << endl;
    cout << "Armor Class: " << you.getUserAC() << endl;
}

void Action::GameOver(User you, string fName){//if the player gets to 0 or less hp, prompts whether user wants to continue from last save or end game
    cout << "You have fallen..." << endl;
    cout << "Would you like to continue?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cin >> choice;
    if(choice != 1 && choice != 2){
        while(choice != 1 && choice != 2){
            cout << "Invalid choice!" << endl;
            cout << "You have fallen..." << endl;
            cout << "Would you like to continue?" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;
            cin >> choice;
        }
    }
    if(choice == 1){
        setGameOver(false);
        Load(you, fName);
        move(you, fName);
    }
    if (choice == 2){
        EndGame();
    }
}

void Action::QuotaMet(){//if quota is met, displays this v and ends game
    cout << "Congratulations! You've met your quota!" << endl;
    cout << "Thank you for playing!" << endl;
    EndGame();
}

void Action::EndGame(){//at the end of the game, deletes all pointers and displays farewell message
    cout << "Goodbye!" << endl;
    delete userHP;
    delete userAC;
    delete userHPT;
    delete goldPoints;
    delete userATT;
    
    exit(1);
}

void Action::gameLoop(User you, string fName){//continues looping the game until the quota is met or the user falls
    while(isGameOver() != true && quotaMet != true){
        move(you, fName);
    }
    if(isGameOver() == true){
        GameOver(you, fName);
    }
    else if(quotaMet == true){
        QuotaMet();
    }
}

