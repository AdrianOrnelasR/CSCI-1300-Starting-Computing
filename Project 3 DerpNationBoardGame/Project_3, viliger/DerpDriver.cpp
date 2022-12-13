/*
CSCI1300: Spring 2020
Author: Adrian Ornelas
Recitation: 114 - Soumyajiyoti Bhattacharya
Project 3 - class 4
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
#include <cstdlib> //was used for the rollDie function of the random die moviement 
#include "Player.h"
#include "Iteams.h"
using namespace std;

int rollDie()
{
    int roll;
    int min = 1; // the min number a die can roll is 1
    int max = 6;// this->dieSize; // the max value is the die size

    roll = rand() % (max - min + 1) + min;

    return roll;
}

int damagePlayer(int min, int max)
{
	int damage;
	min;
	max;
	
	damage = rand() % (max - min + 1) + min;
	
	return damage;
}

int main()
{
	srand(time(0)); //helps randomize the roll of the dice; 
	string name;
	string Playertextt;
	fstream in_file;
	int input;
	int diceCounter = 0; 
	string bitch;
	int shopPlayer;
	int tempdiceroll; //yes i have a lot of verables, sorry i get lost on tracking them
	int newWeaponDam;
	int newPlayerHel;
	int fightchoice;
	int tempPlayMon;
	int tempWeapontype;
	int damangetemp;
	int enimyhealth = 100;
	int l = 0;
	int currntmin;
	int currntmax;
	int emymin = 10;
	int emymax = 25;
	int empydamtemp;
	int newPlayerHeeel;
	Player play;
	Iteams item;
	char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; // this is used to test for if the player enters a character in menues
	
	cout << "|_____________________________________________|" << endl;
	cout << "|What would you like your players name to be? |" << endl; // user input 
	cout << "|Please enter a name below                    |" << endl;
	cout << "|_____________________________________________|" << endl;
		
		getline(cin, name, '\n'); 
				play.setPlayerName(name);  // set players name to the class
			cin.clear(); // clears the cin
		
	//----------------------Intro----------------------------------------------------------------------------------------------------
	cout << "|_______________________________________________________________________________________________________________________________|" << endl;
	cout << "|Hello " << play.getPlayerNam() << " Welcome to the amazing game board DerpNation. In this game you would need to traval through| " << endl;
	cout << "|there are 50 spaces that are keeping you from reaching the final destination The DerpNation Kingdom. You will be               |" << endl;
	cout << "|rolling a dice to determin how many spaces you will be rolling, but be carfull, there dangerous alley ways that                |" << endl;
	cout << "|will contain thieves that will try to fight and kill you to prevent you from reaching DerpNation Kingdom. There                |" << endl;
	cout << "|will also be shops scatered on the trail to upgrade you weapons and increase health so when it comes to you next               |" << endl;
	cout << "|fight you will be more prepared. Through your journy you may document your journey and collect information so we               |" << endl;
	cout << "|the kingdom could research the trail, we will reward you at the end when you make it for the information.                      |" << endl;
	cout << "|Good luck " << play.getPlayerNam() << " we are expecting you here. :)                                                          |" << endl;
	cout << "|_______________________________________________________________________________________________________________________________|" << endl;
	cout << endl;
	
	//---------------------------Weapon choice Option Menu---------------------------------------------------
	cout << "|_____________________________________________________|" << endl;
	cout << "|--------------Please Select your Weapon--------------|" << endl;
	cout << "|======1: Sword - does 50 damage======================|" << endl;
	cout << "|======2: Battle Axe - does 50 damage=================|" << endl;
	cout << "|======3: Dual Wielding Daggers - does 50 damage======|" << endl;
	cout << "|_____________________________________________________|" << endl;
			
			while(tempWeapontype != 1 && tempWeapontype != 2 && tempWeapontype != 3)
			{
			cin >> tempWeapontype;
			cin.clear();
			
			if(tempWeapontype < 0 || tempWeapontype > 3 || tempWeapontype == alphabet[26])
			{
				cout << "Invalid input, try again" << endl;
				cin.ignore(1000, '\n');
			}
			else
			{
				switch(tempWeapontype)
				{
					case 1:
						cout << "You Have Chosen a Sword" << endl;
						cout << "----------------------------------------" << endl;
						item.setWeapon("Sword");
						break;
					case 2:
						cout << "You Have Chosen a Battle Axe" << endl;
						cout << "----------------------------------------" << endl;
						item.setWeapon("Battle Axe");
						break;
					case 3:
						cout << "You Have Chosen a Dual Wielding Daggers" << endl;
						cout << "----------------------------------------" << endl;
						item.setWeapon("Dual Wielding Daggers");
						break;
					}
				//	break;
				}
				
				
			}
			
			
			
	play.setPlayerMoney(650);
	play.setHealth(150);
	item.setWeaponDamage(50);
	currntmin = 15;
	currntmax = 50;
	damagePlayer(currntmin, currntmax);
	
	cout << "This is how you will start your journey traveler" << endl;
		cout << "Your Name: " << play.getPlayerNam() << endl;
		cout << play.getPlayerNam() << "'s Health: " << play.getPlayerHealth() << endl;
		cout << play.getPlayerNam() << "'s Weapon: " << item.getWeapon() << " with dealing a damage of " << item.getWeaponDamage() << endl;
		cout << play.getPlayerNam() << "'s Money : " << play.getPlayerMoney() << endl;
		cout << endl;
		
	cout << "======Let us get started======" << endl;
	
	while(input != 7 && diceCounter <= 50)
	{
		
	    cout << endl;
	    cout << "|______________________________________|" << endl;
	    cout << "|=======1: Roll Dice===================|" << endl;
	    cout << "|=======2: Write into your scroll======|" << endl;
	    cout << "|=======3: Balance Amount==============|" << endl;
	    cout << "|=======4: Current Spaces==============|" << endl;
	    cout << "|=======5: Read your scroll============|" << endl;
	    cout << "|=======6: Your Stats==================|" << endl;
	    cout << "|=======7: End Game====================|" << endl;
	    cout << "|______________________________________|" << endl;
	    	//cin.ignore(1000, '\n');
	    	cin >> input;
	    	cin.clear();
	    	
	    if(input < 0 || input > 7 || input == alphabet[26]) 
	    {
	    	cout << "Invalid input, try again with an input between 1 and 6" << endl;
			cin.clear();
	    	cin.ignore(1000, '\n');
	    }
	    else
	    {
	    switch(input)
	    {
	        
	        case 1:
	           while(diceCounter <= 50)
	           {
	           if(diceCounter >= 50)
	           {
	        	cout << "You Have made it traviler, thanks for allowing us to have you deocumented journey. We will put this in our tresury and " << endl;
	        	cout << "make sure your name goes down in DerpNations HISTORY" << endl;
	        	break;
	           }
	           else
	           {
	           	tempdiceroll = rollDie();
	           	diceCounter += tempdiceroll;
	             cout << "Your dice roll = " << tempdiceroll << endl;
	                if(diceCounter %5 == 0)
	                    {
	                        cout << "|~~Welcome to the DerpStore traviler, I have many options~~|" << endl;
	                        cout << "|============1: Upgrade Your Weapon========================|" << endl;
	                        cout << "|============2: Uprade Your Health=========================|" << endl;
	                        cout << "|============3: Leave The DerpShop=========================|" << endl;
	                        	cin.ignore(1000, '\n');
	                        	cin >> shopPlayer;
	                        	cin.clear();
	                    	
	                    	do
	                    	{
	                        if(shopPlayer < 0 || shopPlayer > 3 || shopPlayer == alphabet[26])
	                        {
	                        		cout << "Invalid input, please enter either 1, 2, or 3" << endl; 
	                        			cin.ignore(1000, '\n');
	                        			cin >> shopPlayer;
	                        			cin.clear();
	                        }
	                        else
	                        {
	                        	switch(shopPlayer)
	                        	{
	                        		case 1:
	                        			cout << "Your Current weaponDamage of " << item.getWeapon() << " is " << item.getWeaponDamage() << endl;
	                        				newWeaponDam = item.getWeaponDamage() + 15;
	                        				item.setWeaponDamage(newWeaponDam);
						                    currntmin += 15;  				
	                        				currntmax += 15;
	                        				damagePlayer(currntmin, currntmax);
	                        				cout << "Your New WeaponDamage for your " << item.getWeapon() << " is " << item.getWeaponDamage() << endl;
	                        				break;
	                        		case 2:
	                        			cout << "Your Current Health is " << play.getPlayerHealth() << endl;
	                        				newPlayerHel = play.getPlayerHealth() + 100;
	                        				play.setHealth(newPlayerHel);
	                        				cout << "Your New Health Amount is " << play.getPlayerHealth() << endl;
	                        				break;
	                        		case 3:
	                        			cout << "Well thanks for your time, have a great rest of your journey traviler." << endl;
	                        			break;
	                        	}
	                        	break;
	                        }
	                    }while(shopPlayer != 1 || shopPlayer != 2 || shopPlayer != 3);
	                    }
	                else if (diceCounter %3 == 0)
	                    {
	                        cout << "|~~Who goes there, I dont allow people to walk my streets. If you want to pass you either have to~~| " << endl;
	                        cout << "|~~~~~~~~~~~~The thief has ontly 100 health but a weaker weapon damage than you.~~~~~~~~~~~~~~~~~~~| " << endl;
	                        cout << "|==========================1: Fight me and win=====================================================|" << endl;
	                        cout << "|==========================2: Pay the Randsome of $200=============================================|" << endl;
	                        	
	                        	cin.ignore(1000, '\n');
	                        	cin >> fightchoice;
	                        	//cin.clear();
	                        
	                        
	                    	while(fightchoice != 1 || fightchoice != 2)
	                    	{
	                        
	                        if(fightchoice < 0 || fightchoice > 2 || fightchoice == alphabet[26])
	                        {
	                        	cout << "Invalid input, please enter either 1 or 2" << endl; 
	                        		cin.ignore(1000, '\n');
	                        		cin >> fightchoice;
	                        		cin.clear();
	                        }
	                        else
	                        {
	                        	switch(fightchoice)
	                        	{
	                        		case 1:

	                        		while(enimyhealth > 0)
	                        		{
	                        			cout << "You took a swing first" << endl;
	                        			cout << endl;
	                        			int hitplayer;
	                        			cout << "Type number one to hit the enemy" << endl;
	                        				
	                        				cin.ignore(1000, '\n');
	                        				cin >> hitplayer;
	                        				cin.clear();
	                        				
	                        			if(hitplayer != 1)
	                        			{
	                        				cout << "Please type number one to hit" << endl;
	                        			}
	                        			else
	                        			{
	                        				damangetemp = damagePlayer(currntmin, currntmax);
	                        				
	                        					if(damangetemp > 50)
	                        					{
	                        						cout << "That was a critical hit, did more than 50 damage. GREAT HIT" << endl;
	                        						enimyhealth = enimyhealth - damangetemp;
	                        						cout << "He is currently at: " << enimyhealth << endl;
	                        						empydamtemp = damagePlayer(emymin, emymax);
	                        						newPlayerHeeel = play.getPlayerHealth() - empydamtemp;
	                        						play.setHealth(newPlayerHeeel);
	                        						cout << "Ouch that hurt, your now at " << play.getPlayerHealth() << endl;
	                        					}
	                        					else
	                        					{
	                        						enimyhealth = enimyhealth - damangetemp;
	                        						cout << "He is currently at: " << enimyhealth << endl;
	                        						empydamtemp = damagePlayer(emymin, emymax);
	                        						newPlayerHeeel = play.getPlayerHealth() - empydamtemp;
	                        						play.setHealth(newPlayerHeeel);
	                        						cout << "Ouch that hurt, your now at " << play.getPlayerHealth() << endl;
	                        					}	
	                        			}
	                        		}

	            					cout << endl;
	                        		cout << "Good job getting away from that enemy, your health will be reset to 150" << endl;
	        						play.setHealth(150);
	        						cout << "But be carefull, they will keep getting stronger from here on out" << endl;
	        						cout << "Witch more health and stronger hit" << endl;
	        						emymax += 10;
	        						emymin += 10;
	        						enimyhealth += 120;
	        						break;
	                        		
	                        		case 2:
	                        			tempPlayMon = play.getPlayerMoney() - 200;
	                        			play.setPlayerMoney(tempPlayMon);
	                        			cout << "Thank you for the money sucker, continue on your day and im sure you will be runing into my friends again" << endl;
	                        			cout << "Current Balance now is " << play.getPlayerMoney();
	                        			break;
	                        	}
	                        break;	
	                        } 
	                    }
	                   
	                    }
	                    else
	                    {
	                    	cout << "It doesnt seem like your ran into any shops or allies, you are safe to roll again!!!" << endl;
	                    }
	           }
	           break;
	           }
	           break;
	        case 2:
	        	cout << "What would you like to document " << play.getPlayerNam() << endl;
	        		cin.ignore(1000, '\n');
	        		getline(cin, Playertextt);
	        		cin.clear();
	            		item.writeToAScroll("playerScroll.txt", Playertextt);
	            break;
	            
	        case 3:
	        	cout << "Your current balence " << play.getPlayerNam() << " is " << play.getPlayerMoney() << endl;
				break;
	        case 4:
	            cout <<  "You are in space " << diceCounter << " at the moment" << endl;
	            l = 50 - diceCounter;
	            cout << "You currently have " << l << " continue to play " << play.getPlayerNam() << " you got this!!!!" << endl;
	        	break;
	        case 5:
	            cout << "This is what is in your scroll Traviler: " << endl;
	            item.readScroll();
	            break;
	        case 6:
	        	cout << "Your currents are: " << endl;
	        	cout << "Your current health is: " << play.getPlayerHealth() << endl;
	        	cout << "Your current weapon is: " << item.getWeapon() << endl;
	        	cout << "Your " << item.getWeapon() << " Does: " << item.getWeaponDamage() << endl;
				break;
	    }
	    }
	}
	cout << endl;
	if(diceCounter >= 50)
	{
		cout << "|*****You Have made it traviler, thanks for allowing us to have you deocumented journey. We will put this in our tresury and****| " << endl;
		cout << "|*******************************make sure your name goes down in DerpNations HISTORY********************************************|" << endl;
	}
	else
	{
		cout <<" |Thank You for Playing DerpNation Board Game|" << endl;
		cout << "|Hope you will be back soon!!!!!!!!!!!!!!!!!|" << endl;
		cout << endl;
		
	}
	
}