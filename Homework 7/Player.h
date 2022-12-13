/*
CSCI1300: Spring 2020
Author: Adrian Ornelas
Recitation: 114 - Soumyajiyoti Bhattacharya
HomeWork 7 - Problem 1
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;
#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    public:
    //defult constructor
    Player();
    //parameterized constructor
    Player(string, double);  
    
    //mutator
    void setName(string); 
    void setPoints(double); 
    //assessor
    string getName();
    double getPoints();
    
    private:
    //private verables
    string playername; 
    double playerpoints;
    
};

#endif