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
	double yourGrade; //verables
	double prc1;
	double prc2;
	double prc3;
	cout << "Enter practicum 1 score:" << endl; // ask for user score 
	    cin >> prc1; // stores that score
    cout << "Enter practicum 2 score:" << endl; // ask for users score
        cin >> prc2; // stores that score
    cout << "Enter practicum 3 score:" << endl; // ask for user score
	    cin >> prc3; //stores that score
	yourGrade = (prc1 + prc2 + prc3) / 3; // calculates the average 
	cout << "Practicum average: " << setprecision(2) << fixed << yourGrade << endl; //couts the averge to set precision
	if(yourGrade >= 67){ // if the score is greater than or equal to 67
	    cout << "You have a passing practicum average." << endl; // print they pass
	} else { // if not
	    cout << "You can retake practicums during the final." << endl; // print out they failed 
	}
	
}   