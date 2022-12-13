/*
CSCI1300 Spring 2020
Author: Adrian Ornelas
Recitation 203
Homework 3 problem 3
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double numOfSushi;
	double priceOfSushi;
	double dicount;
	cout << "Enter the number of sushi: " << endl;
	    cin >> numOfSushi;
	if(numOfSushi <= 0)
	{
	    cout << "Invalid input" << endl;
	}
	else if(numOfSushi < 10)
	{
	    priceOfSushi = numOfSushi * 1.99;
	    cout << "Total price: $" << setprecision(2) << fixed << priceOfSushi <<endl;
	}
	else if(10 <= numOfSushi && numOfSushi <= 19)
	{
	    dicount = (numOfSushi * 1.99) * (0.1);
	    priceOfSushi = (numOfSushi * 1.99) - dicount; 
	    cout << "Total price: $" << setprecision(2) << fixed << priceOfSushi <<endl;
	}
	else if(20 <= numOfSushi && numOfSushi <= 49)
	{
	    dicount = (numOfSushi * 1.99) * (0.15);
	    priceOfSushi = (numOfSushi * 1.99) - dicount; 
	    cout << "Total price: $" << setprecision(2) << fixed << priceOfSushi <<endl;
	}
	else if(50 <= numOfSushi && numOfSushi <= 99)
	{
	    dicount = (numOfSushi * 1.99) * (0.2);
	    priceOfSushi = (numOfSushi * 1.99) - dicount; 
	    cout << "Total price: $" << setprecision(2) << fixed << priceOfSushi <<endl;
	}
	else if( numOfSushi >= 100)
	{
	    dicount = (numOfSushi * 1.99) * (0.25);
	    priceOfSushi = (numOfSushi * 1.99) - dicount; 
	    cout << "Total price: $" << setprecision(2) << fixed << priceOfSushi <<endl;
	}
}