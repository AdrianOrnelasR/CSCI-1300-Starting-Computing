/*
CS1300 Spring 2020
Author: Adrian Ornelas
Recitation: 114 – Soumyajyoti Bhattacharya
Project 1 - Problem 1
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
/*
    goes to a function to calculate the surfacearea of a perimad 
*/
double surfaceArea(double length, double height){ //this is the function
   double surface, total, base; // verables
   surface = (length*length)+((height *length / 2)*4); // calculates the suface area
    if(surface<0||length<0||height<0)
    { // if the inputs or the furcace area is less than 0
        return -1; // return -1
        
    }
    else
    { //if not
        
        return surface; // return the amount stored in surface area
    }
}
int main()
{
    double length, height; // verables for user input 
    
	cout << "Enter the base length: " << endl; // ask for  user input and stores it
	    cin >> length;
    cout << "Enter the slant height: " << endl;
        cin >> height;
        
    double surface = surfaceArea(length, height); // calls the fuction surfacearea and uses user input into the eqation
    
    if (surface == -1){ // if the returned value is negative 1
        cout << "Invalid values" << endl; // print this statment
    } else{ // if not 
     cout << "The surface area: " << surface << endl; // print out the surface area 
    }
}