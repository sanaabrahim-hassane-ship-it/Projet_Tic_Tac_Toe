#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "functions.h"

int main()
{
	char plateau[9];
    	int gagnant;
    	bool etat_jeu = true;
	int verification_victoire;

	system("clear");
	creation_plateau(plateau);

	while(etat_jeu)
	{
		system("clear");
		afficher_plateau(plateau);

        	joueur_tour(plateau);
		verification_victoire = verify_winner(plateau);
        	if (verification_victoire == 1)
        	{
			gagnant = 1;
            		break;
        	}
		if (cases_indisponibles(plateau))
        	{
            		break;
        	}

		afficher_plateau(plateau);
		sleep(1);

		ordinateur_tour(plateau);
		verification_victoire = verify_winner(plateau);
        	if (verification_victoire == 1)
        	{
			gagnant = 2;
            		break;
        	}
		if (cases_indisponibles(plateau))
        	{
            		break;
        	}
	}
	system("clear");
	afficher_plateau(plateau);
	if (gagnant == 1)
	{
        	printf("C'est gagné !\n");
    	}
    	else if (gagnant == 2)
    	{
        	printf("C'est perdu !\n");
    	}
    	else
    	{
        	printf("Match nul !\n");
    	}
	exit(0);
}
