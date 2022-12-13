/*
CS1300 Spring 2020
Author: Adrian Ornelas
Recitation: 114 – Soumyajyoti Bhattacharya
Homework 4 - Problem 2
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
/* 
    has the users input display there Collatz conjecture
*/
int main()
{
    int num; // varible
    cout << "Enter a positive number:" << endl; // ask for input
        cin >> num; // stores input 
        cout << num << endl;
    while(num != 1){ //as the input is not equal to 1
        if(num %2 ==0){ //if the input is divisable by 2
            num = num/2; // devide the number by 2
            cout << num << endl; // display it 
             // cycle till becomes faulse 
        }else{ // if its odd
            num = (3*num)+1; // multiply by 3 than add one
            cout << num << endl; // display it
            //cycle till becomes faulse 
        }
    }
}