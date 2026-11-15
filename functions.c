#include <stdio.h>
#include <stdlib.h>

void creation_plateau(char plateau[9]) 
{
    int i = 0;
    while(i < 9) 
    {
        plateau[i] = ' ';
        i++;
    }
}
void afficher_plateau(char plateau[9])
{
    int i = 0;
    system("clear");
    while(i < 9)
    {
        printf("\t %c | %c | %c \n", plateau[i], plateau[i + 1], plateau[i + 2]);
        if (i < 6) 
        {
            printf("\t-----------\n");
        }
        i+= 3;
    }
    printf("\n");
}

void joueur_tour(char plateau[9])
{
    int choix;
    while(true)
    {
        printf("Choisissez où jouer : \n");
        if (scanf("%d", &choix) != 1) 
        {
            while (getchar() != '\n'); 
            printf("Entree invalide. Recommence.\n");
            continue;
        }
        if (choix >= 0 && choix <= 8 && plateau[choix] == ' ')
        {
            plateau[choix] = 'X';
            break;
        } 
        else 
        {
            printf("Case invalide : \n");
        }
    }
}

void ordinateur_tour(char plateau[9])
{
    for (int i = 0; i < 9; i++)
    {
        if (plateau[i] == ' ')
        {
            plateau[i] = 'O';
            break;
        }
    }
}

int verify_winner(char plateau[9])
{
    int i = 0;
    int combinaisons_victoire[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
        {0, 4, 8}, {2, 4, 6}};

    while(i < 8)
    {
        int option_une = combinaisons_victoire[i][0];
        int option_deux= combinaisons_victoire[i][1];
        int option_trois= combinaisons_victoire[i][2];

        if (plateau[option_une] != ' ' && plateau[option_une] == plateau[option_deux] && plateau[option_deux] == plateau[option_trois])
        {
            return 1;
        }
        i++;
    }
    return 0;
}
