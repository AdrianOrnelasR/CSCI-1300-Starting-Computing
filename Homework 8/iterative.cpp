/*
CSCI1300: Spring 2020
Author: Adrian Ornelas
Recitation: 114 - Soumyajiyoti Bhattacharya
HmWk 8- Problem 1
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

string decimalToBinaryIterative(int NonNeg)
{
    string Binar;
    
    if(NonNeg == 0)
    {
        Binar = "0";
    }
    while(NonNeg > 0)
    {
        if(NonNeg %2 == 0)
        {
            Binar = "0" + Binar;
        }
        else
        {
            Binar = "1" + Binar;
        }
        NonNeg = NonNeg / 2; 
    }
    return Binar;
}


int main()
{
    
}