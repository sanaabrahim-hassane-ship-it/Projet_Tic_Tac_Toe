#include <stdio.h>
#include <stdlib.h>

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
	}
	exit(0);
}
