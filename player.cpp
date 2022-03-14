// TP5/EX1/player.cpp
// exercice 1 : BasketTeamAGAIN
// BODIN Maxime C2
// 22/03/15

#include "player.h"


Player::Player(std::string name) : itsName(name)
{}


const std::string &Player::getItsName() const
{return itsName;}


void Player::addStatistics(int points, int playTime)
{itsPoints = points; itsPlayTime = playTime;}


void Player::display()
{

}


std::ostream& operator<<(std::ostream& ostr, const Player& player)
{
    return ostr << player.itsName << ':' << player.itsPoints << '/' << player.itsPlayTime << '\n';
}
