/*
CSCI1300: Spring 2020
Author: Adrian Ornelas
Recitation: 114 - Soumyajiyoti Bhattacharya
Project 3 - class 3
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;
#ifndef ITEAMS_H
#define ITEAMS_H

class Iteams
{
    public:
    //defult constructor
    Iteams();
    //parameterized constructor
    //Iteams(string, int, string);
    //assassor
    string getWeapon();
    int getWeaponDamage();
    string readScroll();
    //mutator
    void setWeapon(string);
    void setWeaponDamage(int);
    void writeToAScroll(string, string);
    
    private:
    string Weapon;
    string scroll;
    int weaponDamage;
    
    
    
};

#endif