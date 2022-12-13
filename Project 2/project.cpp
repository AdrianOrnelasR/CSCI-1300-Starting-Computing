/*
CSCI1300: Spring 2020
Author: Adrian Ornelas
Recitation: 114 - Soumyajiyoti Bhattacharya
Project 2 - Problem 3
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
/*#include "Book.h"
#include "Book.cpp"
#include "User.h"
#include "User.cpp"
#include "Library.h"
#include "Library.cpp"*/
using namespace std;
    
int main()
{
    int intput;
    
    do
	{
	    
            
	    cout << "Select a numerical option:" << endl;
        cout << "======Main Menu=====" << endl;
        cout << "1. Read books" << endl;
        cout << "2. Read ratings" << endl;
        cout << "3. View ratings" << endl;
        cout << "4. Print all books" << endl;
        cout << "5. Update a rating" << endl;
        cout << "6. Add a user" << endl;
        cout << "7. Get recommendations" << endl;
        cout << "8. Quit" << endl;
            cin >> intput;
        
        if(intput <= 8 && intput >= 1)
        {
        switch(intput) 
        {
            case 1:
                string fileNAme;
                ifstream in_file;
                
                cout << "Enter a book file name: " << endl; 
                    cin >> fileNAme;
                
                in_file.open(fileNAme);
    
        if(in_file.fail())
        {
            cout << "No books saved to the library." << endl;
            return 0;
        }
        else
        {
            return 1;
        }
                break;
            
            case 2:
                string fileName;
                ifstream in_file;
                
                cout << "Enter a user file name: " << endl; 
                    cin >> fileName;
                
                in_file.open(fileName);
    
                if(in_file.fail())
                {
                    cout << "No users saved to the library." << endl;
                    return 0;
                }
                else
                {
                    return 1;
                }
                    break;
                
            case 3:
                string useR;
                int Rat;
                
                cout << "Enter a user name: " << endl;
                    cin >> useR;
                
                cout << "Enter a minimum rating: " << endl;
                    cin >> Rat;
                    
                cout << "Here are the books that Akriti rated " << endl;
                break;
            
            case 4:
                cout << "case 4 worked " << endl;
                break;
            
            case 5:
                string UsEr;
                string BookTitle;
                int RaTt;
                
                cout << "Enter a user name: " << endl;
                    cin >> useR;
                    
                cout << "Enter a book title: " << endl;
                    cin >> BookTitle;
                
                cout << "Enter a new rating: " << endl;
                    cin >> Rat;
                    
                cout << "The rating has been updated. " << endl;
                break;
            
            case 6:
                string NewUser;
                
                cout << "Enter a user name: " << endl;
                    cin >> NewUser;
                
                cout << "Welcome to the library " << NewUser << endl;
                break;
            
            case 7:
                string UserRec;
                
                cout << "Enter a user name: " << endl;
                    cin >> UserRec;
                
                cout << "Here is the list of recommendations" << endl;
                break;
            
            case 8:
                cout << "Good bye!" << endl;
                break;
        }
        }
        else
        {
            cout << "Invalid option." << endl;
        }
            
        
	}while(intput != 8);
}