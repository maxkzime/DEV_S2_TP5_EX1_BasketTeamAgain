// TP5/EX1/player.h
// exercice 1 : BasketTeamAgain
// BODIN Maxime C2
// 22/03/15

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include <fstream>


using std::string, std::ostream, std::cout;

class Player
{

    protected:
    string itsName;
    int itsPlayTime;
    int itsPoints;

    public:
    Player(string name);
    const string &getItsName() const;
    void addStatistics(int points, int playTime);
    void display();

    friend ostream& operator<<(ostream& ostr, const Player* player);

};

#endif // PLAYER_H
