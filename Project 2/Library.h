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
#ifndef LIBRARY_H
#define LIBRARY_H
using namespace std;

class Library{
    public:
    //defultcounstucter
    Library(); 
    //getters/accessors
    int getNumBooks();
    int getNumUsers();
    int readBooks(string);
    int readRatings(string);
    void viewRatings(string, int);
    void printAllBooks();
    void addUser(string);
    void updateRating(string, string, int);
    void getRecommendations(string);
    //private verables 
    private:
    Book books[50];
    User users[100];
    int numBooks;
    int numUsers;
};
#endif