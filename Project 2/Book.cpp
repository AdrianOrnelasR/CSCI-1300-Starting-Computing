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
#include "Book.h"
using namespace std;


Book::Book()//conducter
{
    string author = ""; //settes verables to blank
    string title = "";
}

Book::Book(string NewTitle, string NewAuthor) //parameterized constructor
{
    author = NewAuthor; //sets there name into the 
    title = NewTitle;
}

string Book::getTitle()//accessor 
{
    return title;
}

string Book::getAuthor()
{
    return author;
}

void Book::setTitle(string Title)//mutator
{
    title = Title;
}

void Book::setAuthor(string Author)//mutator
{
    author = Author;
}