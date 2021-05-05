#include "Enterprise.hpp"

int Enterprise::lastId = 0;

Enterprise::Enterprise(string name)
{
    this->id = generateId();
    this->name = name; 
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
        teams.erase(teams.begin() + teamIndex);
        return;
    }
    cout << "team is'nt registered" << id << endl;
}

void Enterprise::showPlayer(int id) 
{
    bool playerFound;
   for (int i = 0; i < teams.size(); i++)
    {
        for (int j = 0; j < teams[i].getPlayers().size(); j++) 
        {
            if (teams[i].getPlayers()[j].getId() == id)
            {
                cout << "--- player found ---" << endl;
                cout << "team: " << teams[i].getName() << endl;
                cout << "Personal Info: "; teams[i].getPlayers()[j].printInfo();
                cout << "Personal Financial: "; teams[i].getPlayers()[j].printFinancialInfo();
                playerFound = true;
                break;
            }
            if(playerFound) break;
        }
    }
    if(!playerFound)
    {
        cout << "--- playerId " << id << " not found ---" << endl;
    }
}

void Enterprise::showPlayers()
{
    int totalPlayers = 0;

    cout << "--- Enterprise Players ---" << endl;
    cout << "Name: " << this->name << endl;
    for (int i = 0; i < teams.size(); i++)
    {
        for (int j = 0; j < teams[i].getPlayers().size(); j++) 
        {
            teams[i].getPlayers()[j].printInfo();
        }
        totalPlayers = totalPlayers + teams[i].getPlayers().size();
    }
    cout << "total: " << totalPlayers << endl;
}

void Enterprise::showFinancialRelatory()
{
    cout << "--- Enterprise financial relatory ---" << endl;
    cout << "name: " << this->name << endl;
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


