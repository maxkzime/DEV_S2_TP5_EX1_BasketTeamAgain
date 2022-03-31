// TP5/EX1/team.h
// exercice 1 : BasketTeamAgain
// BODIN Maxime C2
// 22/03/15

#ifndef TEAM_H
#define TEAM_H

#include "player.h"
#include <map>

using std::map, std::ofstream;

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
    string itsTeamName;
    map <Position, Player *> *itsPlayers;

public:
    Team(string teamName);
    ~Team();

    void addPlayer(Position position, Player* player);
    void addStatistics(string name, int points, int playTime);
    void display();

    friend ostream& operator<<(ostream& ostr, const Position pos);

    bool save();
};

#endif // TEAM_H
