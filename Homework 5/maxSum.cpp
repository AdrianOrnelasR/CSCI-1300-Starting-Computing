/*
CSCI1300: Spring 2020
Author: Adrian Ornelas
Recitation: 114 - Soumyajiyoti Bhattacharya
HomeWork 5 - Problem 4
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int maxSum(int arr[][10], int row) //this function takes in a double array with an intial size for the columns and a user inputer for row
{
    int max = arr[0][0]; //a temo verabel for the first location 
    int sum = 0; // a temp verable
    for(int i = 0; i < row; i++) // incrament through the amount of times they want a row
    {
        max = arr[i][0]; //store that verable in the row location when the location of the column is 0
        for(int j = 0; j < 10; j++){ // now go through the column 
            if(arr[i][j] > max) //now see if the location of the incrament is greater than the 
            {
                max = arr[i][j]; //have that number be the new max
                
            }
        }
        sum += max; // have sum equal to sum + the first location 
    }return sum; // return that amount 
}


int main()
{

}