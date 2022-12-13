/*
CSCI1300: Spring 2020
Author: Adrian Ornelas
Recitation: 114 - Soumyajiyoti Bhattacharya
Project 3 - class 1
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
#include "Iteams.h"
using namespace std;
#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    public:
    //defult constructor
    Player();
    //parameterized constructor
    //Player(string, int, int);
    //assassor
    string getPlayerNam();
    int getPlayerHealth();
    void getalliteem();
    int getPlayerMoney();
    
    //mutator
    void setPlayerName(string);
    void setHealth(int);
    void setiteem(string);
    void setPlayerMoney(int);
    
    
    private:
    string PlayerName;
    int PlayerHealth;
    int PlayerMoney;
    Iteams iteem[4];
    
    
    
};

#endif