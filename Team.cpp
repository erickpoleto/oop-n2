#include "Team.hpp"
#include "CategoryHelper.hpp"

int Team::lastId = 0;

Team::Team(string name, SportiveCategory category)
{
    this->id = generateId();
    this->name = name;
    this->category = CategoryHelper::parseCategoryEnumToString(category);
}

void Team::addPlayer(Player player)
{
    players.push_back(player);
}

void Team::removePlayer(int id)
{
    auto playerIndex = 0;

    for ( int i = 0; i < players.size(); i++)
    {
        if(players[i].getId() == id)
        {
            playerIndex = i;
        }
    }
    if(playerIndex > 0) {
        players.erase(players.begin()+playerIndex);
        return;
    }
    cout << "team is'nt registered" << id << endl;
}

void Team::showTotals() 
{
    float totalWages;
    float totalInss;
    float totalWithholdingTax;
    for (int i = 0; i < players.size(); i++)
    {
        totalWages = totalWages + players[i].getSalary();
        totalInss = totalInss + players[i].calcInss(players[i].getBruteSalary());
        totalWithholdingTax = totalWithholdingTax + players[i].calcWithholdingTax(players[i].getBruteSalary());
    }

    cout << "Team: " << name << " - " 
        << "Total wages: " << totalWages << " - "
        << "Total inss: " << totalInss << " - "
        << "Total withholding tax: " << totalWithholdingTax << endl;
}

void Team::showGeneralRelatory()
{
    cout << "----- Team Relatory -----" << endl;
    cout << "Team: " << name << endl;
    for( int i = 0; i < players.size(); i++)
    {
        players[i].printInfo();
    }
}

void Team::showFinancialRelatory()
{
    cout << "----- Team Financial Relatory -----\n" << endl;
    cout << "Team: " << name << endl;
    for( int i = 0; i < players.size(); i++)
    {
        players[i].printFinancialInfo();
    }
}

int Team::generateId()
{
    lastId++;
    return lastId;
}

int Team::getId()
{
    return this->id;
}

string Team::getName()
{
    return this->name;
}

string Team::getCategory()
{
    return this->category;
}

void Team::setCategory(SportiveCategory category)
{
    this->category = CategoryHelper::parseCategoryEnumToString(category);
}

vector <Player> Team::getPlayers()
{
    return this->players;
}


