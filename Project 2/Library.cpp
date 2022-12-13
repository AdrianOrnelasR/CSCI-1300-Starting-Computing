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
#include "Book.h"
#include "Book.cpp"
#include "User.h"
#include "User.cpp"
#include "Library.h"
using namespace std;
    
    //split function that will be used
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

    //string function to turn a string to lowercase letters 
    string lowcaseFunction(string lower)
    {
            for(int i = 0; i < lower.length(); i++)
            {
                lower += tolower(lower[i]);
            }
            return lower;
        }
        
    //get the useres rating fucntion
    int getAuthorRating(string author, string title, User user[], Book book[], int numUsers,int numBooks)
    {
    int match = 0; 
    int idx = 0;
    int position = 0;
        for(int i = 0; i < numUsers; i++)
        {
            if(lowcaseFunction(author) == lowcaseFunction(user[i].getUsername()))
            {
                position = i;
            }
        }
            for(int j = 0; j < numBooks; j++)
            {
                if(lowcaseFunction(title) == lowcaseFunction(book[j].getTitle()))
                {
                    idx = j;
                }   
            }
        return user[position].getRatingAt(idx);
    }

    // the default constructor
    Library::Library()
    {
        numBooks = 0;
        numUsers = 0;
    }
    int Library::getNumBooks()
    {
        return numBooks;
    }
    int Library::getNumUsers()
    {
        return numUsers;
    }
    int Library::readBooks(string file)
    {
        ifstream in_file;
        in_file.open(file);
        string line = "";
        string temp[50];
        int tempy;
    
        if(in_file.fail())
        {
            return -1;
        }
        else
        {
            while(getline(in_file, line))
            {
                tempy = split(line, ',', temp, 51);
                books[numBooks].setTitle(temp[1]);
                books[numBooks].setAuthor(temp[0]);
                numBooks++;
            }
        }
        return numBooks;
        in_file.close();
    }
    int Library::readRatings(string file)
    {
        int startusers = numUsers; 
        int value;
        ifstream in_file;
        in_file.open(file);
        string line = "";
        string temp[50];
        if(numUsers >= 100)
        {
            return numUsers;
        }
        if(in_file.fail())
        {
           return -1;
        }   
        else
        {
            while(getline(in_file, line))
            {
                if(line != "")
                {
                    value = split(line, ',', temp, 51);
                    for(int i = 1; i < value; i++)
                    {
                        users[numUsers].setUsername(temp[0]);
                        users[numUsers].setRatingAt((i-1), stoi(temp[i]));
                    }
                    numUsers++;
                }
            }
                return numUsers;
        }
    in_file.close();
}
    void Library::viewRatings(string file, int min)
    {
        int trackuser = 0;
        int trackauthor = 0;
        
        if(numUsers == 0 || numBooks == 0)
        {
            cout << "The library has not been fully initialized. " << endl;
        }
        for(int i = 0; i < numUsers; i++)
        {
            if(lowcaseFunction(users[i].getUsername()) == lowcaseFunction(file))
            {
                trackuser++;
            }
            if(getAuthorRating(file, books[i].getTitle(), users, books, numUsers, numBooks) != 0)
            {
                trackauthor++;
            }
        }
        if(trackauthor == 0)
        {
            cout << file << " does not exist." << endl;
        }
        else if(trackuser == 0)
        {
            cout << file << " has not rated any books yet." << endl;
        }
        else
        {
            cout << "Here are the book that " << file << " rated" << endl;
        for(int i = 0; i < numBooks; i++)
        {
            if(min <= (getAuthorRating(file,books[i].getTitle(),users,books,numUsers,numBooks)))
            {
                cout << "Title: " << books[i].getTitle() << endl;
                cout << "Rating: " << getAuthorRating(file,books[i].getTitle(),users,books,numUsers,numBooks) << endl;
                cout << "-----" << endl;
            }
            
        }
    }
    }
    void Library::printAllBooks()
    {
        for(int i = 0; i < numBooks; i++)
        {
            cout << books[i].getTitle() << " by " << books[i].getAuthor() << endl;
        }
    }
    void Library::addUser(string AddedUser)
    {
        for(int i=0 ; i<numUsers; i++)
        {
            if(lowcaseFunction(users[i].getUsername()) == lowcaseFunction(AddedUser))
            {
                cout << AddedUser << "already exists in the library. " << endl;
            }
        }
                if(numUsers > 100)
                {
                    cout << "The library is already full. " << AddedUser << " was not added. " << endl;
                }
                else
                {
                    users[numBooks].setUsername(AddedUser);
                    
                    numUsers++;
                }
    }
    void Library::updateRating(string username, string title, int newRating)
    {
        string authorsbook;
        int titleMatch = 0;
        int userMatch = 0;
        
        if(numUsers == 0 || numBooks == 0)
        {
            cout << "The library has not been fully initialized." << endl;
        }
        else if(newRating >= 0 && newRating <= 5)
        {

            for(int i = 0; i < numUsers; i++)
            {
                if(lowcaseFunction(users[i].getUsername()) != lowcaseFunction(username))
                {       
                    cout << username << " does not exist." << endl;
                }
                else
                {
                    userMatch = i;
                }
            }
            for(int j = 0; j < numBooks; j++)
            {
                authorsbook = books[j].getTitle();
                if(lowcaseFunction(authorsbook) != lowcaseFunction(title))
                {
                    cout << title << " does not exist." << endl;
                }
                else
                {
                    titleMatch = j;
                }
            }
            if(titleMatch == 0 || userMatch == 0)
            {
                cout << "no matches" << endl;
            }
            else
            {
                users[userMatch].setRatingAt(titleMatch,newRating);
                cout << "The rating has been updated" << endl;

            }
        }
        else
        {
            cout << newRating << " is not valid." << endl;

        }
    }
    void Library::getRecommendations(string username)
    {
        cout << "got recomedations is to hard" << endl;
    }
     