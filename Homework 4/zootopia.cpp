/*
CS1300 Spring 2020
Author: Adrian Ornelas
Recitation: 114 – Soumyajyoti Bhattacharya
Homework 4 - Problem 3
*/

#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
/*
    this allows users to continue using input for specific choices and fine out there atrabutes, will run untill decide to close the loop
*/

int main()
{
    int choice;  //verables 
    double hirescore, agility, strength, speed;
   
    do{ //will execute there comands until done
    cout<<"Select a numerical option:"<<endl; // the menu that will keep getting reprinted 
	cout<<"=== menu ==="<<endl;
	cout<<"1. Fox"<<endl;
	cout<<"2. Bunny"<<endl;
	cout<<"3. Sloth"<<endl;
	cout<<"4. Quit"<<endl;
        cin >> choice;   //stores user input
    
    if(choice <=4 && choice >= 1){ // if there choice is between and including 4 and 1 than enter if statement 
    
    switch (choice){ // enters the switch depends on number choosen 
    case 1: // if entered 1
    cout << "Enter agility: " << endl;
        cin >> agility; // store agility entered 
    cout << "Enter strength: " << endl;
        cin >> strength; // store strength entered 
    speed = 0.0;
    hirescore = (1.8 * agility) + (2.16 * strength) + (3.24 * speed); // calculates there hire score
        cout <<"Hire Score: " << hirescore << endl; // prints it out
    break; // leaves the command 
    
    case 2:   //if chosen option 2
    cout << "Enter agility: " << endl;
        cin >> agility; // stores agility input 
    cout << "Enter speed: " << endl;
        cin >> speed; //stores speed input
    strength = 0.0;
    hirescore = (1.8*agility) + (2.16*strength) + (3.24*speed); // calculates there hire score
        cout <<"Hire Score: " << hirescore << endl; // prints it out
    break; //breaks from statement 
    
    case 3: //if chosen option 3
    cout << "Enter strength: " << endl;
        cin >> strength; //stores strength input
    cout << "Enter speed: " << endl;
        cin >> speed; // stores speed input
    agility = 0.0;
    hirescore = (1.8*agility) + (2.16*strength) + (3.24*speed); // calculates there hire score
        cout <<"Hire Score: " << hirescore << endl; // prints it out
    break;  // breaks from statement 
   
    case 4: //if chosen 4
        cout << "Good bye!" << endl; //prints this out 
        break; // exits the program
    }
    }else{ // if non imply 
        cout << "Invalid option" << endl; //print this out 
    }
    }while (choice != 4); // condition that if entered 4 than repeat process util program is told to quit
    
}