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
#include "User.h"
using namespace std;

//defult constructer 
User::User()  //sets the private verables to black the string nothing
{
    string username = ""; 
    for(int i = 0; i < 50; i++)  
    {
        ratings[i] = 0;
    }
}
//parameterized constructor
User::User(string NewUser,int ratings_[]) //sets the users new name to the private verable, and the rating array will 50 elements of 0
{
    username = NewUser; 
    for(int i = 0; i < 50; i++)  
    {
        ratings[i] = 0;
    }
    
}
//accessor
string User::getUsername()//has it return the username stored in the private class
{
   return username;  
}
int User::getRatingAt(int i)// to find the position in a spacific place
{
    if(i < 50 && i > -1) 
    {
        return ratings[i]; 
    }
    else 
    {
        return -1; 
    }
}
//mutater
void User::setUsername(string NewUser)  //give the private user verable the new username
{
    username = NewUser;
}
bool User::setRatingAt(int i, int RateValue) //go through the array and set the poition wanted to the value they want 
{
    if(i >= 0 && i < 50 && RateValue >= 0 && RateValue <= 5)  //test if the index and ratevalue are true
    {
        ratings[i] = RateValue; //than set the position to the value
        return true; //exist and return true
    }
    else //if the index or ratevalue are invalide 
    {
        RateValue = 0; //set the value equal to 0 if not ture 
        return false; // return it was false 
    }
}

