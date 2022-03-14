// TP5/EX1/team.cpp
// exercice 1 : BasketTeamAGAIN
// BODIN Maxime C2
// 22/03/15

#include "team.h"
#include <iostream>


Team::Team(std::string teamName) : itsTeamName(teamName)
{itsPlayers = new map< Position, Player *>();}


Team::~Team()
{delete itsPlayers;}


void Team::addPlayer(Position position, Player *player)
{
    itsPlayers->insert({position, player});
}


void Team::addStatistics(std::string name, int points, int playTime)
{
    map <Position, Player*>::iterator it;
    for (it = itsPlayers->begin(); it != itsPlayers->end(); ++it)
        if(it->second->getItsName() == name)
            it->second->addStatistics(points,playTime);
}


void Team::display()
{
    map <Position, Player*>::iterator it;
    for (it = itsPlayers->begin(); it != itsPlayers->end(); ++it)
        std::cout << it->first << it->second->display();
}
