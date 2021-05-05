#include "Player.hpp"
#include "Team.hpp"
#include "Enterprise.hpp"
#include "SportiveCategory.hpp"
#include "DateHelper.hpp"

int main() 
{
    //cria jogadores
    Player player("erick", Date(5, 3, 1999), "brazilian", SportiveCategory::PROFESSIONAL, 1300.00);
    Player player1("Jhon", Date(7, 5, 1995), "britsh", SportiveCategory::PROFESSIONAL, 1500.00);
    Player player2("Pueblo", Date(4, 6, 1990), "american", SportiveCategory::PROFESSIONAL, 3000.00);

    //cria times
    Team team("Spain", SportiveCategory::PROFESSIONAL);
    Team team1("France", SportiveCategory::PROFESSIONAL);

    //add jogadores aos time
    team.addPlayer(player);
    team.addPlayer(player1);
    team1.addPlayer(player2);
    
    // mostra relatorio geral dos time
    team.showGeneralRelatory();
    cout << "" << endl;
    team1.showGeneralRelatory();
    cout << "" << endl;

    // mostra relatorio financeiro dos times
    team.showFinancialRelatory();
    cout << "" << endl;
    team1.showFinancialRelatory();
    cout << "" << endl;

    Enterprise enterprise("Great Enterprise");

    //add times a empresa
    enterprise.addTeam(team);
    enterprise.addTeam(team1);

    //mostra jogadores da empresa
    enterprise.showPlayers();
    cout << "" << endl;

    //mostra jogador pelo id
    enterprise.showPlayer(player1.getId());
    cout << "" << endl;

    //mostra relatorio financeiro da empresa
    enterprise.showFinancialRelatory();
}