#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "functions.h"

int main()
{
	char plateau[9];
    	int gagnant;
    	bool etat_jeu = true;
	creation_plateau(plateau);

	while(etat_jeu)
	{
		afficher_plateau(plateau);
        	joueur_tour(plateau);
		sleep(1);
		ordinateur_tour(plateau);

		gagnant = verify_winner(plateau);
        	if (gagnant == 2) 
        	{
            		etat_jeu = false;
        	}
	}
	exit(0);
}
