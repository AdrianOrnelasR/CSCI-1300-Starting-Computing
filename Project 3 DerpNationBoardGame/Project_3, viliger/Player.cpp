#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
#include "Player.h"
#include "Iteams.h"
using namespace std;

    
    Player::Player()
    {
        string PlayerName = " ";
        int PlayerHealth = 0;
        int PlayerMoney = 0;
    }
    /*
    Player::Player(string name, int helth, int money)
    {
        PlayerName = name;
        PlayerHealth = helth;
        PlayerMoney = money;
    }
    */
    string Player::getPlayerNam()
    {
        return PlayerName;
    }
    
    int Player::getPlayerHealth()
    {
        return PlayerHealth;
    }
    
    int Player::getPlayerMoney()
    {
        return PlayerMoney;
    }
    void Player::getalliteem()
    {
        for(int i = 0; i < 4;  i++)
        {
            cout << iteem[i].getWeapon() << endl;
            //cout << iteem[i].readScroll() << endl;
        }
    }
    
    
    void Player::setiteem(string add)
    {
    
        for(int o = 0; o < 4; o++)
        {
            iteem[o].setWeapon(add);
        }
    }
    
    void Player::setPlayerName(string name)
    {
        PlayerName = name;
    }
    
    void Player::setHealth(int helth)
    {
        PlayerHealth = helth;
    }
    
    void Player::setPlayerMoney(int money)
    {
        PlayerMoney = money;
    }