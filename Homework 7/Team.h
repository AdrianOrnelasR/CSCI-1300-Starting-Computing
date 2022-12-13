/*
CSCI1300: Spring 2020
Author: Adrian Ornelas
Recitation: 114 - Soumyajiyoti Bhattacharya
HomeWork 7 - Problem 2 
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
#include "Player.h"
using namespace std;

#ifndef TEAM_H
#define TEAM_H

class Team
{
    public:
    //defult constructor
    Team(); 
    //parameterized constructor 
    Team(string); 
    //mutators
    void setTeamName(string);
    //assessors
    int readRoster(string);
    string getPlayerName(int);
    double getPlayerPoints(int);
    int getNumPlayers();
    string getTeamName();
    
    private:
    //private verables
    string teamName; 
    Player players[50];
    int numPlayers;
    
};

#endif