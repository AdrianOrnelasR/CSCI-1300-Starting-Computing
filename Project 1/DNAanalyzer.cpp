/*
CS1300 Spring 2020
Author: Adrian Ornelas
Recitation: 114 – Soumyajyoti Bhattacharya
Project 1 - Problem 4
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
//first function to calculate simscore
double calcSimScore(string seq1, string seq2){ //this function takes in 2 strings
int count = 0; // a verable set to defult 0
if(seq1.length() == 0 || seq2.length() == 0){ // if the string is empty
    return 0; // exit the function 
}
else if(seq1.length() == seq2.length()){ //if they share the same length
for(int i = 0; i < seq1.length(); i++){ //loop through the first string
   
    if(seq1[i] == seq2[i]){ // if there is any matchs between the first string to the seccond 
        count++; // incrament verable count by 1
    }
}
   double hamming_distance = seq1.length() - count; //calculates hammering score (which is when they are not the same)
   double similarity_score = (seq1.length() - hamming_distance) / seq1.length(); // calculates the sim score
    return similarity_score; //returns the score
}
}
//----------------------------------------------------------
//this function will carry a substring to calculate the simscore using not just one differnece in character
double findBestSimScore(string complete, string subs){ //takes in 2 strings. a complete string and the seccond string is a substring on what they would like to find 
    double score = 0; // a verable set to defult 0
    if(subs.length() > complete.length()){ // if the substring is larger than the string 
        score = 0; // set score = 0
    }
    else{ // if the first test is passed 
    for(int i = 0; i < complete.length(); i++){ //set i equal to 0 and incrament through the length of the string
       double best_score = calcSimScore(complete.substr(i, subs.length()), subs); //sets a double verable that calls the simscore funtion to the substring of the first string --->
                                                                                 // which is set from a stating place of the increment to the length of the substring, and find the matchs
                if(best_score > score){ // if the best new score is greater than 0
                    score = best_score; //set score eqal to bestscore 
                }
    }
}return score; // return score depends on what if or else statment when to
}

//----------------------------------------------------------
//will test multiple strings and use the other 2 functions to calculate which stirng  has the greatest simscore using the substring
void findMatchedGenome(string genome1, string genome2, string genome3, string subgenome){// takes in the 3 strings and substrings

    double num1 = findBestSimScore(genome1, subgenome);// calls upon the 2ed function to calculate the simscore
    double gem2 = findBestSimScore(genome2, subgenome);
    double gem3 = findBestSimScore(genome3, subgenome);
    
    if(genome1.length() == 0 || genome2.length() == 0 || genome3.length() == 0 || subgenome.length() == 0){// if they are empty
        cout << "Genomes or sequence is empty." << endl;
    }else if(genome1.length() != genome2.length() || genome1.length() != genome3.length()){// if they dont equal each other length
        cout << "Lengths of genomes are different." << endl;
    }else{ 
        if(num1 == gem2 && num1 == gem2 && gem3 == gem2){ //if all 3 have the same score
            cout << "Genome 1 is the best match." << endl;
            cout << "Genome 2 is the best match." << endl;
            cout << "Genome 3 is the best match." << endl;
        }else if(num1 == gem2 && gem2 > gem3){ // if the first and second have the same score
            cout << "Genome 1 is the best match." << endl;
            cout << "Genome 2 is the best match." << endl;
        }else if(num1 == gem3 && gem3 > gem2){ // if the first and third scores are the same 
            cout << "Genome 1 is the best match." << endl;
            cout << "Genome 3 is the best match." << endl;
        }else if(gem2 == gem3 && gem3 > num1){ //if the second and third scores are the same
            cout << "Genome 2 is the best match." << endl;
            cout << "Genome 3 is the best match." << endl;
        }
        else if(num1 > gem2 && num1 > gem3){ // is the first score is the biggest
            cout << "Genome 1 is the best match." << endl;
        }else if(gem2 > num1 && gem2 > gem3){ // if the sccond score is the biggest
            cout << "Genome 2 is the best match." << endl;
        }else if(gem3 > num1 && gem3 > gem2){ // if the third score is the same
            cout << "Genome 3 is the best match." << endl;
        }
}
}


int main()
{
int input; //verables 
string input1, input2, input3, input4; 
double scoree;
    do{ //will run throught loop 
        
        cout << "Select a numerical option:" << endl; // menu that gets reprinted while the statement remains true
        cout << "=== menu ===" << endl;
        cout << "1. Find similarity score" << endl;
        cout << "2. Find the best similarity score" << endl;
        cout << "3. Analyze the genome sequences" << endl;
        cout << "4. Quit" << endl;
            cin >> input;
        if(input <= 4 && input >= 1 ) //if the user input is greater than or equal to 1 and less than or equal to 4
        {
        switch(input){
            case 1: //if the user enters 1
                cout << "Enter sequence 1: " << endl;
                    cin >> input1;
                cout << "Enter sequence 2: " << endl;
                    cin >> input2;
                scoree = calcSimScore(input1, input2);
                cout << "Similarity score: " << scoree << endl;
                break; 
            
            case 2: //if user entered 2
                cout << "Enter genome: " << endl;
                    cin >> input1;
                cout << "Enter sequence: " << endl;
                    cin >> input2;
                scoree = findBestSimScore(input1, input2);
                cout << "Best similarity score: " << scoree << endl;
                break;
                
            case 3: //if user entered 3
                cout << "Enter genome 1: " << endl;
                    cin >> input1;
                cout << "Enter genome 2: " << endl;
                    cin >> input2;
                cout << "Enter genome 3: " << endl;
                    cin >> input3;
                cout << "Enter sequence: " << endl;
                    cin >> input4;
                findMatchedGenome(input1, input2, input3, input4);
                break;
        }
        }else{ // if the user enters a number greater than 4
            cout << "Invalid option." << endl;
            
        }    
    }while(input != 4); //if the user enters 4 than quit the loop 
        cout << "Good bye!" << endl; //print this 
}