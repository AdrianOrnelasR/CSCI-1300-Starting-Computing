/*
CSCI1300: Spring 2020
Author: Adrian Ornelas
Recitation: 114 - Soumyajiyoti Bhattacharya
HomeWork 5 - Problem 6
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

int split(string str, char character, string arr[], int size) //a function that takes in a peramiter of a string (there stirng they want to look through), char (what they want to search for), array(to sroe the string), and size of the array
{ 
    //temp verables
    string temp;
    int track = 0;
    int i;
    
    if(str.length() == 0) //if the string they gave is empty 
    {
        return 0; // exit the function
    }
    else
    {
        str += character; //add the make the string equal to the string and add it to the character
        
        for(i = 0; i < str.length(); i++) // go through the string length
        {
            if(str[i] != character) //if the string array with the counter does not equal the charactr
            {
                temp += str[i]; // have the temp string equal to the to the temp string plus the string array
            
            }
            else if(temp.length() != 0) // else if the temp string is not empty
            {
                arr[track] = temp; // store the temp verable into the array it into the array
                track++; //increment the temp veable
            
            temp = ""; // than have temp equal blank space
            }
        }   
    }
        if(track > size) //if the temp verable is greater than the size they want 
        {
            return -1; //exit the fucntion and return -1
        }
        else // if not
        {
             return track;   //return the temp verable that tracked the occursion 
        }

}

int main()
{
    	
}