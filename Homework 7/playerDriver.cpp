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
//#include "Player.cpp"
using namespace std;

int main()
{
    //sets the players name
    Player playeropen;
    string nip = "carlos";
        playeropen.setName(nip);
    cout << "Set the Players name to carlos:" << endl;
        cout << playeropen.getName() << endl;
            cout << endl;
    //see defult points
    cout << "The Players defult points: " << endl;
        cout << playeropen.getPoints() << endl;
            cout << endl;
    //test the players points 
    int pointss = 50;
        cout << "The Player scored 50 points: " << endl;
    playeropen.setPoints(pointss);
        cout << playeropen.getPoints() << endl;
            cout << endl;
}