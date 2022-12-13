/*
CSCI1300: Spring 2020
Author: Adrian Ornelas
Recitation: 114 - Soumyajiyoti Bhattacharya
HomeWork 5 - Problem 2
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

void stats(double arr[], int element){ // a fucntion that takes in the peramiters of an array and element whihc is the size of the array
    double sum = 0; // temp verable
    double min = arr[0]; // temp verable to hold first place in array
    double max = arr[0]; // same thing
    for(int i = 0; i < element; i++)// loop through as much as is stored in the array
    { 
        sum += arr[i]; //sum to the location eveytime it loops
        if(arr[i] < min) // sees if that number is smaller than the first location 
        {
            min = arr[i]; // make it the new min
        }
        if(arr[i] > max) // if it is greater than the first location 
        {
            max = arr[i]; // make that the new max
        }//loop back around till condition becomes fauls
    }
    double average = sum/element; //calculaes the average
    
    cout << "Min: " << setprecision(2) << fixed << min << endl;//prints eveything
    cout << "Max: " << setprecision(2) << fixed << max << endl;
    cout << "Avg: " << setprecision(2) << fixed << average; 
}

int main(){
    	
double arr[] = {0,1,2,3,4,5,6,7,8,9}; // test
int len = 10;
stats(arr, len);
}