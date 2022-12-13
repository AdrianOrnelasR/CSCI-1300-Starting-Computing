/*
CS1300 Spring 2020
Author: Adrian Ornelas
Recitation: 114 – Soumyajyoti Bhattacharya
Homework 4 - Problem 1
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

/*
    this function gets all the possitive numbers from a function and adds them all up to get the sum
*/

int main()
{
    int pn; //a verable 
    int sum = 0;
    cout << "Enter a positive number:" << endl; // ask for user input
        cin >> pn; //stores user input
    for(int i =0; i <= pn; i += 2){ //as a new verable i is less than there input than incrament i by 2
        sum+=i; // add up and the i multiples
    }cout << "Sum: " << sum << endl; // print out the sunm 
}