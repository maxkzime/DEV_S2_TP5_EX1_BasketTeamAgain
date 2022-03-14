// TP5/EX1/team.h
// exercice 1 : BasketTeamAGAIN
// BODIN Maxime C2
// 22/03/15

#ifndef TEAM_H
#define TEAM_H

#include "player.h"
#include <map>

using std::map;

enum Position
{
    CENTER,
    POWER_FORWARD,
    SMALL_FORWARD,
    SHOOTING_GUARD,
    POINT_GUARD
};

class Team
{
private:
    std::string itsTeamName;
    map <Position, Player *> *itsPlayers;

public:
    Team(std::string teamName);
    ~Team();

    void addPlayer(Position position, Player* player);
    void addStatistics(std::string name, int points, int playTime);
    void display();
};

#endif // TEAM_H
