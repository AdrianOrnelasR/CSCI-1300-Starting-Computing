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
#include "Iteams.h"
using namespace std;


    //defult constructor
    Iteams::Iteams()
    {
        Weapon = "";
        scroll = "";
        weaponDamage = 0;
    }
    //parameterized constructor
    /*
    Iteams::Iteams(string PlayersWeapon, int Weapondamage, string scrollName)
    {

        Weapon = PlayersWeapon;
        weaponDamage = Weapondamage;
        scroll = scrollName;
    }
    */
    //assassor
    string Iteams::getWeapon()
    {
        return Weapon;
    }    
    int Iteams::getWeaponDamage()
    {
        return weaponDamage;
    }
    string Iteams::readScroll()
    {
        ifstream in_file;
        string str = "";
        
        
        in_file.open("playerScroll.txt");
        
        while(getline(in_file, str))
        {
            cout << str << endl;
        
        }
        
        in_file.close();
        return str;
    }  
    
    //mutator
    void Iteams::setWeapon(string PlayerWep)
    {
        Weapon = PlayerWep;
    }    
    void Iteams::setWeaponDamage(int WepDam)
    {
        weaponDamage = WepDam;
    } 

    void Iteams::writeToAScroll(string file, string playerText)
    {
        file = "playerScroll.txt";
        
        ofstream in_file;
        
        in_file.open(file, fstream::app);
        
        in_file << playerText << endl;
    
        in_file.close();
    
    }