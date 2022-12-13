/*
CS1300 Spring 2020
Author: Adrian Ornelas
Recitation: 114 – Soumyajyoti Bhattacharya
Homework 4 - Problem 4
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
/*
    will calculate in how many months it will take for the student to be able to afroed the home
    */
int main()
{
    double currentsav = 0; //verables 
    double rate = 0.04/12;
    int month = 0;
    double annualsal, persal, dreamhome;
   
    cout << "Enter your annual salary: " << endl; //ask for all user inputs 
        cin >> annualsal;
    cout << "Enter the percent of your salary to save, as a decimal:" << endl;
        cin >> persal;
    cout << "Enter the cost of your dream home: " << endl;
        cin >> dreamhome;
    
    double downpay = dreamhome * 0.25; // verable to calculate how much the downpayment 
    
    while(currentsav < downpay) //as long as his savings is less than the downpayment for the house 
    {
        currentsav = currentsav + currentsav *rate; //find the rate 
        currentsav = currentsav+ (annualsal /12) * persal; // calculate  per month saving amount 
        month++; //increments month verable 
    }
    cout << "Number of months: " << month << endl;  // prints out the amount of months it was stores when it was over downpayment 
   
}