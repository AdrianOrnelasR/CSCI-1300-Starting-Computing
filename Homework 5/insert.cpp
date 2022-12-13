/*
CSCI1300: Spring 2020
Author: Adrian Ornelas
Recitation: 114 - Soumyajiyoti Bhattacharya
HomeWork 5 - Problem 3
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int insert(int arr[], int element, int size, int added) // a funtion that takes in an array, element (which is the size of the array), size whihc is the new wanted size, and a number they want to add to the array
{
   int i; // temp verable
   if(element >= size) // if the the orginal size is equal to the new size they want or greater than
    {
        return element; // exit the function because it will cause the system to crash
    }
    else 
    {
    for(i = element - 1; arr[i] > added; i--) //set the temp verable i to the inital size - 1, test if that is greater than the number they want to add, go to the next location (i--)
    {
        if(i >= 0)//if the number is greater than or equal to 0
        {
            arr[i + 1] = arr[i]; // make that number switch locations
        }
        else // if not
        {
            return element; //exit the function
        }
    }
     arr[i + 1] = added; // set that location were it became faulse to the verable they want to add
     return element + 1; //return the inital size and only add 1 to the size and not when they wanted an intial size of 8 to a size of 10, it will only input the numbe once
    }
   
}

int main()
{

}