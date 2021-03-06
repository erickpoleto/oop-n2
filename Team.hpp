#ifndef Team_hpp
#define Team_hpp

#include "Player.hpp"
#include "SportiveCategory.hpp"
#include<iostream>
#include <vector>

using namespace std;

class Team
{
public:
    Team(string name, SportiveCategory category);
    
    int getId();
    string getName();
    string getCategory();
    vector <Player> getPlayers();

    void setName(string name);
    void setCategory(SportiveCategory category);
    void addPlayer(Player player);
    void removePlayer(int id);

    void showTotals();
    void showGeneralRelatory();
    void showFinancialRelatory();

private:
    int id;
    string name;
    string category;
    vector <Player> players;

    int static lastId;
    int generateId();
};

#endif