// TP5/EX1/team.cpp
// exercice 1 : BasketTeamAgain
// BODIN Maxime C2
// 22/03/15

#include "team.h"


Team::Team(string teamName) : itsTeamName(teamName)
{itsPlayers = new map< Position, Player *>;}


Team::~Team()
{delete itsPlayers;}


void Team::addPlayer(Position position, Player *player)
{itsPlayers->insert({position, player});}


void Team::addStatistics(std::string name, int points, int playTime)
{
    map <Position, Player*>::iterator it;
    for (it = itsPlayers->begin(); it != itsPlayers->end(); ++it)
        if(it->second->getItsName() == name)
            it->second->addStatistics(points,playTime);
}


ostream& operator<<(ostream& ostr, const Position pos)
{
    string posi;

    switch (pos)
    {
    case CENTER: posi = "CENTER";
        break;
    case POWER_FORWARD: posi = "POWER_FORWARD";
        break;
    case SMALL_FORWARD: posi = "SMALL_FORWARD";
        break;
    case SHOOTING_GUARD: posi = "SHOOTING_GUARD";
        break;
    case POINT_GUARD: posi = "POINT_GUARD";
        break;
    }

    return ostr << posi << '\n';
}


void Team::display()
{
    cout << " ---- Team : ---- " << '\n'
         << "Nom : " << this->itsTeamName << "\n\n";

    map <Position, Player*>::iterator it;
    for (it = itsPlayers->begin(); it != itsPlayers->end(); ++it)
        cout << it->first << it->second << '\n';
}


bool Team::save()
{
    bool isOpen = false;

    string title;
    title = itsTeamName + ".team";
    ofstream file;
    file.open(title);

    if (!file)
    {
        cout << "erreur ouverture fichier" << '\n';
        return 1;
    }
    else
    {
        isOpen = true;
        file << " ---- Team : ---- " << '\n'
             << "Nom : " << this->itsTeamName << "\n\n";

        map <Position, Player*>::iterator it;
        for (it = itsPlayers->begin(); it != itsPlayers->end(); ++it)
            file << it->first <<  it->second << '\n';
    }

    file.close();

    return isOpen;

}
