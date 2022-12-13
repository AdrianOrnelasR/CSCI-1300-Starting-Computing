#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
#include "Team.h"
#include "Player.h"
using namespace std;



string game(Team team1, Team team2)
{
    string winner;
    int playercount1 = team1.getNumPlayers();
    int playercount2 = team2.getNumPlayers();

    if(playercount1 < 4 || playercount2 < 4)
    {
        winner = "forfeit";
        return winner;
    }
    else
    {
        double sumTeam1 = 0;
        double sumTeam2 = 0;
        for(int i = 0; i < 4; i++)
        {
            sumTeam1 += team1.getPlayerPoints(i);
            sumTeam2 += team2.getPlayerPoints(i);
        }
        if(sumTeam1 == sumTeam2)
        {
            winner = "draw";
        }
        else if(sumTeam1 > sumTeam2)
        {
            winner = team1.getTeamName();
        }
        else
        {
            winner = team2.getTeamName();
        }
    }
    
   return winner; 
}

int main()
{
	std::cout << "Hello from AWS Cloud9!" << std::endl;
}