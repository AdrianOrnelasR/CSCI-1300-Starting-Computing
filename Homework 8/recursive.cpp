/*
CSCI1300: Spring 2020
Author: Adrian Ornelas
Recitation: 114 - Soumyajiyoti Bhattacharya
HmWk 8- Problem 2
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

string decimalToBinaryRecursive(int DecBin)
{
    string Binar;
    int temp;
    
    if(DecBin == 0)
    {
        Binar = "0";
        return Binar;
    }
    else if(DecBin == 1)
    {
        Binar = "1";
        return Binar;
    }    
    else
    {
           temp = DecBin %2;
           if(temp == 0)
           {
               Binar = "0";
           }
           else
           {
               Binar = "1";
           }
           return decimalToBinaryRecursive(DecBin / 2) + Binar;
    }
}


int main()
{
    int mine = 78;
	cout << decimalToBinaryRecursive(mine);
}