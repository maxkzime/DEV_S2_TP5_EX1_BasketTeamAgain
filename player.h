// TP5/EX1/player.h
// exercice 1 : BasketTeamAGAIN
// BODIN Maxime C2
// 22/03/15

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
    friend std::ostream& operator<<(std::ostream& ostr, const Player& player);
protected:
    std::string itsName;
    int itsPlayTime;
    int itsPoints;

public:
    Player(std::string name);
    const std::string &getItsName() const;
    void addStatistics(int points, int playTime);
    void display();

};

#endif // PLAYER_H
