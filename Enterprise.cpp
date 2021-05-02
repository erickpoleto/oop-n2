#include "Enterprise.hpp"

int Enterprise::lastId = 0;

Enterprise::Enterprise(string name, vector <Team> teams)
{
    this->id = generateId();
    this->name = name;
    this->teams = teams;    
}

void Enterprise::addTeam(Team team)
{
    teams.push_back(team);
}

void Enterprise::removeTeam(int id)
{
    auto teamIndex = 0;

    for ( int i = 0; i < teams.size(); i++)
    {
        if(teams[i].getId() == id)
        {
            teamIndex = i;
        }
    }
    if(teamIndex > 0) {
        teams.erase(teams.begin()+teamIndex);
        return;
    }
    cout << "team is'nt registered" << id << endl;
}

void Enterprise::showPlayers()
{
    for (int i = 0; i < teams.size(); i++)
    {
        teams[i].showGeneralRelatory();
    }
}

void Enterprise::showFinancialRelatory()
{
    for (int i = 0; i < teams.size(); i++)
    {
        teams[i].showTotals();
    }
}

int Enterprise::generateId()
{
    lastId++;
    return lastId;
}

string Enterprise::getName()
{
    return this->name;
}

void Enterprise::setName(string name)
{
    this->name = name;
}


