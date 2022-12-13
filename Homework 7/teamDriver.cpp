/*
CSCI1300: Spring 2020
Author: Adrian Ornelas
Recitation: 114 - Soumyajiyoti Bhattacharya
HomeWork 7 - Problem 2
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
#include <array>
#include "Team.h"
#include "Team.cpp"
using namespace std;

int main()
{
	Team iosTeam;
	
	string name = "MIP";
	iosTeam.setTeamName(name);
	cout << iosTeam.getTeamName();
	
}