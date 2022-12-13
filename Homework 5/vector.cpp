/*
CSCI1300: Spring 2020
Author: Adrian Ornelas
Recitation: 114 - Soumyajiyoti Bhattacharya
HomeWork 5 - Problem 5
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
	int user_input; //verable to take in user input
	vector<int> vec; //empty vector
	while(user_input != -1) //while the user does not input -1
	{
	    cout << "Please enter a number:" << endl; //ask them to input the number
	        cin >> user_input; //stores the number 
		
		if(vec.size() == 0) //if the vector is empty 
	    {
	    	vec.push_back(user_input); // store the number than redo the loop
	    }
	    else //if after the first verable is stored 
	    {
	    	vec.push_back(user_input); //put the verable in the end of the vector
	    	if(user_input % 5 == 0) //if that number is divisable by 5
	    	{
				vec.erase(vec.begin()); //remove the first verable 
				vec.pop_back(); //and remove the verable entered
	    	}
	    	if(user_input % 3 == 0) // if the verable is divisabke by 3
	    	{
	    		vec.pop_back(); // remove the lest varable 
	    		vec.pop_back(); //and remove that verable 
	    		
	    	}
			
	    }
	}
	vec.pop_back(); // this is to remove the -1 that the user uses to exit the loop
	cout << "The elements in the vector are: "; // print it out
	int min = vec.at(0); //temp verabel to equal the first verable in the vector
	int max = vec.at(0);
	for(int i = 0; i < vec.size(); i++ ) //goes throught the verctore size
	{
		cout << vec.at(i) << ' '; // prints out the vector at that position 
		
		if(min > vec.at(i)) // if the first position is greater than that looped verable
		{
			min = vec.at(i); // set that to the new min
		}
		if(max < vec.at(i)) //if the first position is less than that looped verable
		{
			max = vec.at(i); // set that to the new max
		}
		}
		//once it leaves the loop it prints out the entire vectore
		cout << endl;
	cout << "Min = " << min << endl; //prints the min
	cout << "Max = " << max << endl; //prints the max
	}
	
