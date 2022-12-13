/*
CS1300 Spring 2020
Author: Adrian Ornelas
Recitation: 114 – Soumyajyoti Bhattacharya
Project 1 - Problem 2
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
/*
    a function to calculate what displacemnts happened to the entered verables, if non calculate the total amount
*/

double displacement(double I, double F, double a){ // a funtion with 3 verable inputs
    double numer, denom, dis; //just helps me hold the math varables
    bool errorOccurred = false; // this is  boolen statment that will collect when each statment comes true 
    if(a == 0){ //if the specific verable entered is equal to 0
        cout << "No brakes were applied. " << endl;
        errorOccurred = true;//run through each if statment and print evey one that makes the boolen true
    }
    if(I < 0 || F < 0){ // if the either specific verable is less than 0
        cout << "Velocity should be greater than zero. " << endl;
        errorOccurred = true;
    }
    if(a < 0){ // if the specific verable 
        cout << "The vehicle is speeding up." << endl;
        errorOccurred = true;
    }
    if(F>I){ // if specific verable is grater than the other
        cout << "Error in acceleration values. " << endl;
        errorOccurred = true;
    }
    
    if(errorOccurred == false){ // when the boolen statment becomes false 
        numer = (pow(F, 2)) - (pow(I,2)); // enter the eqation
        denom = (-2 * a);
        dis = numer/denom;
        return dis; // return the  number and leave the funtion 
    }
    return 0;// if non of them just return 0;
}
int main()
{
    double init, fin, decler; //test case
    
	cout << "Enter initial velocity: " << endl; // ask for input
	    cin >> init; // stores input
	cout << "Enter final velocity: " << endl;
	    cin >> fin;
	cout << "Enter deceleration: " << endl;
	    cin >> decler;
	
    double dis = displacement(init, fin, decler); // calles function using the users input
    cout << "value returned: " << dis << endl; // print out the number recieved 
}