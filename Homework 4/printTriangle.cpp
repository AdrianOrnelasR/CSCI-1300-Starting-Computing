/*
CS1300 Spring 2020
Author: Adrian Ornelas
Recitation: 114 – Soumyajyoti Bhattacharya
Homework 4 - Problem 6
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
/*
    prints a triangle using the alphabet and using the users choice of hight 
*/
int main(){

    int hight; //verable 
    int alpha = 97; //let it to 97 because thats the beging of the lowercase letters on ascii table 
    
    cout << "Enter the height:" << endl; //ask for user input 
        cin >> hight;
    
    for(int i = hight; i >= 0; i--){ // if verable i is equal to there input and its greater than 0 it will decress i
        for(int j = 0; j< i; j++) // as j is equal to 0 and less than i, incrament j 
        {
         cout << char (alpha); // conver the number to a char
         alpha++; // incrament the char
            if(alpha > 122){ // if the number goes over 122 which is z last char in lowcase varable
                alpha = 97; // reset alpha to the beging 
            }
        }cout << endl; //adds a end line
        
    }cout << endl; // adds a end line
    
}
