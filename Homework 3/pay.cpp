/*
CSCI1300 Spring 2020
/*
CSCI1300 Spring 2020
Author: Adrian Ornelas
Recitation 203
Homework 3 problem 2
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double youHour; //verables 
	double youPay;
	double hourAfOt;
	double checkAmount;
	double overTime;
	double otPay;
	cout << "Enter the number of hours worked" << endl; //ask for number from user
	    cin >> youHour; // stores user input
	cout << "Enter an hourly pay rate" << endl; //ask for number from user
	    cin >> youPay; //sotres user input
    if(youHour <0) //if there hours input is less than 0
    {
        cout << "Invalid input" << endl; // prints this out
    } 
    else if(youHour <= 40 && youPay >= 0) //if the user enters hours 40 or greater than 0
    {
        checkAmount = youHour * youPay; //enters calculation 
        cout << "Paycheck: " << setprecision(2) << fixed<< checkAmount;
    }
    else if(youHour > 40 && youPay >= 0) // enters over 40 hours
    {
        overTime = youHour - 40;
        otPay = (youPay * 1.5) * overTime; // enters this calcualtion
        hourAfOt = (youHour - overTime) * youPay;
        cout << "Paycheck: " << setprecision(2) << fixed<< otPay + hourAfOt;
    }
    
    else if(youPay <0) // if user enters less than 0 for pay
    {
        cout << "Invalid input" << endl; // prints this 
    }
	
}
