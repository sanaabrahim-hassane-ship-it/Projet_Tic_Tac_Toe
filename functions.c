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


