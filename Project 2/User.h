/*
CSCI1300: Spring 2020
Author: Adrian Ornelas
Recitation: 114 - Soumyajiyoti Bhattacharya
Project 2 - Problem 2
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;
#ifndef USER_H
#define USER_H

class User
{
    public:
    //defult constructer
    User();
    //parameterized constructor
    User(string,int[],int); 
    //getters/accessors
    string getUsername();
    int getRatingAt(int);
    //mutater
    void setUsername(string);
    bool setRatingAt(int, int);
    //private verables
    private: 
    string username; 
    int ratings[50]; 
};

#endif