/*
CSCI1300: Spring 2020
Author: Adrian Ornelas
Recitation: 114 - Soumyajiyoti Bhattacharya
HomeWork 5 - Problem 1
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;



int main(){

        double arr[10] = {-459.67}; //declared the size of the array and the first verable stored
        for(int i = 0; i < 10; i++) // for loops that will start from the beging index of the array
        {
                arr[i] = -459.67; // eveytime it loops through the array, input that number
                cout << arr[i] << endl; // cout eveytime it loops
        }

        cout << endl; // just to sperate the function 
        
        string color[5] = {"Red", "Blue", "Green", "Cyan", "Magenta"}; // an array that holds a number and what is stores in it
        for(int j = 0; j < 5; j++) // loops through the array
        {
                cout << color[j] << //endl; will print out evey opssiton in the array from 1-4
        }

         cout << endl; // sperate the functions

        int sequence[100]; //delcares a function size of 10
        for(int m = 1; m <= 100; m++) //loops through it 100 times
        {
                sequence[m] = m; //increments by adding m which is 1
                cout << sequence[m] << endl; //prints out that number
        } // than loops back around

        cout << endl; // seperate the function

        char letters[26]; //an array to store upercase letteres
        char lowercase[26]; // to store lowcase letters
        for(int lew = 0; lew < 26; lew++) // one loop that loops throught the size
        {
                letters[lew] = lew + 65; // uses acii table to make it upercase
                lowercase[lew] = lew + 97; //uses acii table to make it lowercase
                cout << letters[lew] << " " << lowercase[lew] << endl; // print the uper and lower side by side
        }
}