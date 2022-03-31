// TP5/EX1/player.cpp
// exercice 1 : BasketTeamAgain
// BODIN Maxime C2
// 22/03/15

#include "player.h"


Player::Player(string name) : itsName(name)
{}


const string &Player::getItsName() const
{return itsName;}


void Player::addStatistics(int points, int playTime)
{itsPoints = points; itsPlayTime = playTime;}


void Player::display()
{cout << this;}


ostream& operator<<(ostream& ostr, const Player* player)
{
    return ostr << player->itsName << ':'
                << player->itsPoints << '/'
                << player->itsPlayTime << '\n';
}
