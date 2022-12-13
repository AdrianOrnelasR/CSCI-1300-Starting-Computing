/*
CSCI1300 Spring 2020
Author: Adrian Ornelas
Recitation 203
Homework 3 problem 1
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
/*
    sees if user input box wights are in order
*/
int main()
{
    cout << "Enter boxers' weights" << endl; // ask for input
    int box1; //stores a verable
        cin >> box1; //takes for verable 
    int box2; // stores a verable
        cin >> box2; // takes for verable
    int box3; // //stores verable 
        cin >> box3; // takes in verable 
    if (box1 < box2 && box1 < box3 && box2 < box3)// if the box is in order 
    { 
        cout << "Ascending order" << endl; // prints out this
    } 
    else if( box1 > box2 && box1 > box3 && box2 > box3)// if boxes are from most to least
    { 
        cout << "Descending order" << endl; // than prints this out 
    }
    else // if its not in any order
    { 
        cout << "Neither" <<endl; // prints out this
    }
}