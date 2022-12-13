/*
CS1300 Spring 2020
Author: Adrian Ornelas
Recitation: 114 – Soumyajyoti Bhattacharya
Project 1 - Problem 3
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
/*
    this is a function that allows the user to enter a string that will loop through the string and using the ascii table to convert the letters (if lowercase) to upercase
*/

string toUpper(string inputuser){ // the function that uses a string 
    for(int count = 0; count <= inputuser.length(); count++){ // will go through the strings length
        if(inputuser[count] >= 97 && inputuser[count] <= 122){ // if the number inside the string is greater than 97 and less than 122 which are the lowercase numbers for ascii table
            inputuser[count] = inputuser[count] - 32; // subtract it by 32 which will convert it to upercase value of the verable 
        }else{
            inputuser[count] = inputuser[count]; // if its less than that than the string  is already upercase so dont affect it
        }
    }return inputuser; // return the whole string from the loop
}

int main()
{
    string user2, user; 
    
    cout << "Enter the string: " << endl;  // ask for the user to enter string 
        cin >> user; // stores the single word string
    
   // cout << "Enter the string more than one word: " << endl; 
   //     getline(cin, user2); // stores full letter string
        
    string userUper = toUpper(user); // sends the string to the function 
   // string userUper2 = toUpper(user2);
    
    cout << userUper << endl;  // prints out the product 
   // cout << userUper2;
    return 0;
}