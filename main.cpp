#include "Player.hpp"
#include "Team.hpp"
#include "Enterprise.hpp"
#include "SportiveCategory.hpp"

int main() 
{
    Player player("erick", "12/07/1699", "brazilian", SportiveCategory::PROFESSIONAL, 1300.00);
    Player player1("Jhon", "12/08/1699", "britsh", SportiveCategory::PROFESSIONAL, 1500.00);
    Player player2("Pueblo", "12/09/1699", "american", SportiveCategory::PROFESSIONAL, 3000.00);
    
    vector <Player> players;
    players.push_back(player);
    players.push_back(player1);
    players.push_back(player2);

    Team team("main", SportiveCategory::PROFESSIONAL, players);
    Team team1("second", SportiveCategory::PROFESSIONAL, players);

    vector <Team> teams;
    teams.push_back(team);
    teams.push_back(team1);

    Enterprise enterprise("Great Enterprise", teams);

    enterprise.showFinancialRelatory();
}