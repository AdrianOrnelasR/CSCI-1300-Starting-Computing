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

int main()
{
 int yearss; //a verable
 int mounthh; // a verable
 //int checkks = 0; // ignore
 //int checkss = 0; // ignore
 
 cout << "Enter a year: " << endl; // ask for user year in int
    cin >> yearss; // stores user input
 cout << "Enter a month: " << endl; // ask for user mounth as int
    cin >> mounthh; // sotres user input

if(yearss % 400 == 0){ // ignore
   // checkks++;
    //cout << checkks << endl;
}else if(yearss % 4 == 0 && yearss % 100 != 0){ // ignore
   //checkks++;
    //cout << checkks << endl;
} else if (mounthh > 12 || mounthh <= 0){ // if month number was entered ti be greater than 12
    cout << "Invalid month" << endl; // print out this
}

switch(mounthh){ // switch statemnt
    case 1: // if month 1 was entered
        cout << "31 days"; // has 31 days
        break; // breaks from case 1
    case 2: // if month 2 was entered 
     if(yearss > 1582 && yearss % 400 == 0 && yearss %4 == 0){ // if the year is greater than 1582 and divisable my 400 and divisable my 4
             cout << "29 days" << endl; // has 29 days
        }else if(yearss <= 1582 && yearss % 100 != 0 && yearss % 4 == 0){ // if years is less than or equal to 1572 and not divisable by 100 but divisable by 4
            cout << "28 days" << endl; // has 28 days
        }else if(yearss > 1582 && yearss %4 == 0 && yearss %100 ==0){ // if the year is greater than 1582 and divisable by 4 and divisable by 100
            cout << "28 days" << endl; // has 28 days 
        }else if(yearss %4 == 0 && yearss %400 !=0){ // if the year is divisabe my 4 but not divisable by 400 
            cout << "29 days" << endl; // has 29 days
        }else { //if non apply
            cout << "28 days" << endl; // has 28 days 
        } 
            break; // breaks 
    case 3: // if 3 entered 
        cout << "31 days"; // has 31 days
        break; // break
    case 4: //if 4 was entered 
        cout << "30 days"; // has 30 days 
        break; // break
    case 5: // if 5 was entered 
        cout << "31 days"; // has 31 days
        break; // breaks
    case 6: // if 6 was entered 
        cout << "30 days"; // has 30 days
        break; // breaks
    case 7: //if 7 was entered 
        cout << "31 days"; // has 31 days 
        break; // breaks 
    case 8: // if 8 was entered
        cout << "31 days"; // has 31 days
        break; // breaks
    case 9: // if 9 days  was entered 
        cout << "30 days"; // has 30 days 
        break; // breaks 
    case 10: // if 10 was entered 
        cout << "31 days"; // has 31 days
        break; // breakes 
    case 11: // if 11 was entered 
        cout << "30 days"; // has 30 days
        break; // breaks 
    case 12: // if 12 was entered 
        cout << "31 days"; // has 31 days 
        break; // breaks 
    
}
}