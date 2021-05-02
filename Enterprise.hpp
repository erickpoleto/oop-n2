#ifndef Enterprise_hpp
#define Enterprise_hpp

#include<iostream>
#include<vector>
#include "Team.hpp"

using namespace std;

class Enterprise
{
public:
    Enterprise(string name, vector <Team> teams);
    
    string getName();
    void setName(string name);

    void addTeam(Team team);
    void removeTeam(int id);
    void showPlayers();
    void showFinancialRelatory();

private:
    int id;
    string name;
    vector <Team> teams;
    
    int static lastId;
    int generateId();
};

#endif