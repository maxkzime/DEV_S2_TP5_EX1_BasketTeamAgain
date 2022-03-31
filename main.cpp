// TP5/EX1/main.cpp
// exercice 1 : BasketTeamAgain
// BODIN Maxime C2
// 22/03/15

#include <iostream>

#include "player.h"
#include "team.h"

using std::cout;

int main()
{
    cout << "BODIN Maxime C2" << "\n\n";


    // >----------------------- JEU DE TESTS -----------------------------<
        cout << '\n' << " >----------------------- JEU DE TESTS -----------------------------< " << '\n';

        // Tests ajouts joueurs
        Player * cyril = new Player("Cyril");
        Player * noah = new Player("Noah");
        Player * nils = new Player("Ninou");

        // Tests ajouts teams
        Team * lakers = new Team("Lakers");
        Team * bulls = new Team("Bulls");

        // Tests ajouts joueurs dans team
        bulls->addPlayer(CENTER, cyril);
        bulls->addPlayer(SMALL_FORWARD,noah);
        lakers->addPlayer(POINT_GUARD,nils);

        // Test affichage tous les contrats
        cout << '\n' << " ------ Test affichage équipe ------ " << '\n';
        bulls->display();

        // Tests ajouts statistiques puis affichage
        cout << '\n' << " ------ Test ajout statistiques puis affichage ------ " << '\n';
        bulls->addStatistics("Cyril",15,120);
        bulls->display();

        lakers->addStatistics("Ninou", 18,126);
        lakers->display();

        noah->addStatistics(16,130);
        bulls->display();

        // Test affichage surcharge
        cout << '\n' << " ------ Test affichage surcharge ------ " << '\n';
        cout << nils << '\n';
        cout << noah << '\n';
        cout << cyril << '\n';

        // Test save une équipe
        cout << '\n' << " ------ Test save une équipe ------ " << '\n';
        if(bulls->save())
            cout << "Enregistrement effectué " << '\n';
        else
            cout << "Echec de l'enregistrement " << '\n';


        cout << '\n' << " >----------------------- JEU DE TESTS -----------------------------< " << '\n';
        // >----------------------- JEU DE TESTS -----------------------------<

    return 0;
}
