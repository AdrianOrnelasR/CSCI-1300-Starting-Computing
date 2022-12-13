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
#include "Player.h"
using namespace std;

    
    Player::Player()//conducter
    {
        playername = "";
        playerpoints = 0;
    }
    
    Player::Player(string name, double point) //parameterized constructor
    {
        playername = name;
        playerpoints = point;
    }
    
    void Player::setName(string name) //mutator
    {
        playername = name;
    }
    void Player::setPoints(double point) // mutator
    {
        playerpoints = point;
    }
    string Player::getName()
    {
        return playername; //assessors
    }

    double Player::getPoints()
    {
        return playerpoints; //asessors
    }