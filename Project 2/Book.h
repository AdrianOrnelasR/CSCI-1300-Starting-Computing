/*
CSCI1300: Spring 2020
Author: Adrian Ornelas
Recitation: 114 - Soumyajiyoti Bhattacharya
Project 2 - Problem 1
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;
#ifndef BOOK_H
#define BOOK_H

class Book
{
    public:
    //defult constructor
    Book();
    //parameterized constructor
    Book(string, string);
    //assassor
    string getTitle();
    string getAuthor();
    //mutator
    void setTitle(string);
    void setAuthor(string);
 
    private:
    string title;
    string author;
    
};

#endif