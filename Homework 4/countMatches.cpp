/*
CS1300 Spring 2020
Author: Adrian Ornelas
Recitation: 114 – Soumyajyoti Bhattacharya
Homework 4 - Problem 5
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
/*
    this will go through a string and match up anytime a match of chars are made
*/
int main(){
  
    string user, substring, finduser; //verables 
    int occurrences = 0;
   
    cout << "Enter the search string:" << endl; //ask for users input
        cin >> user;
    cout << "Enter the substring to be searched: " << endl;
        cin >> finduser;
        
        for(int initial = 0; initial < user.length(); initial++){ //if inital is less than the strings length
            substring = user.substr(initial, finduser.length()); //convets the substring
                if(substring == finduser) // if a match is detected 
                {
                occurrences += 1; // incrament by 1
                }
        }
        cout << "Number of occurrences: " << occurrences << endl; // output the amount is stores when exits the loop 
}