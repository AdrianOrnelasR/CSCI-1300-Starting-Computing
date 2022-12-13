/*
CSCI1300 Spring 2020
Author: Adrian Ornelas
Recitation 203
Homework 3 problem 1
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
/*
    This code is the ad thats takes the user through a series of questions that is minipulated by the users input
*/

int main()
{
int pnum; //a verable 
string dogg; //a verable 
string yd = "yes"; //a verable 
string Yd = "Yes"; //a verable 
int fbF; //a verable 
int ziP; //a verable 
int agE; //a verable 
cout << "How personalized should the ad be? (1-3) " << endl; // prints out a statment to ask for user input
    cin >> pnum; //takes in there input as an int
if(pnum >3||pnum < 1){ //enters the loop if there int is either greater than 3 or less than 1
    cout << "Invalid option." << endl; // prints this if entered the loop
}else{ // if the input is 1, 2, 3
switch(pnum){ // enters the switch statements 
    case 1: //if the number is 1 enter this case
        cout << "Do you own a dog?" << endl; //prints out a statement to ask for user input as string
            cin >> dogg; // stores user input
            if(dogg == yd || dogg == Yd){ // if the users enters Yes or yes than enters this if
                cout << "Meat's the need of dogs like yours!" << endl; // prints this out 
            }else { //if any other thing is entered
                cout << "Dirty mouth? Clean it up with new Orbit Raspberry Mint." << endl; //prints thi out if users input wasent yes or Yes
            }
            break;// leaves the test case 
    case 2: //if the number is 2 enter this case 
        cout << "How many Facebook friends do you have?" << endl; // ask for user input 
            cin >> fbF; // holds users number
                if(fbF >= 500){ // if the users number is greater than or equal to 500
                    cout << "Don't like cleaning up after your dog? Call Doody Free to sign up for backyard cleanup or dog walking service." << endl; //prints out this satements 
                }else{ //if the number is less than 500
                    cout << "Who doesn't need another cat? Adopt a shelter pet right meow."<< endl; // prints this out 
                }
                break; // leaves the case statment
    case 3: // if user enters 3 enters this case 
        cout << "What is your zip code?" << endl; //cout this promt
            cin >> ziP; //takes in user zip
            if(ziP >= 80301 && ziP <= 80310)// sees if there zip is in boulder
            { 
                cout << "What is your age?" << endl; // ask for age
                    cin >> agE; //taks in age

                    if(agE >= 25)//if the age is greather than or equal to 25
                    { 
                        cout << "You are surrounded by professional athletes. Up your exercise game in the privacy of your home with a Peloton bike." <<endl; // couts this statement 
                    }
                    else if(agE > 0) // if the age is not 25 but still greater than 0
                    {
                        cout << "Looking for dinner that won't break the bank? Tacos. Come grab a $3 at Centro Latin Kitchen." << endl; // counts this statment
                    }
            }
            else // if they dont live in boulder 
            {
                cout << "What is your age?" << endl; // ask for age
                    cin >> agE; // takes in age
                    cout << "Feeling Uninspired? The Boulder Flatirons are calling. Come hike to inspiring views, delicious food, and enjoy the hospitality of Boulder, CO." << endl; // [prints this statemnt]
            }

    break; // breaks out of switch case 3
    
}
}
}