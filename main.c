#include <stdio.h>
#include "fonctions.h"

int main(void) {

    char * ligne[3][3] = {
        {" ", " ", " "}, // Ligne 0
        {" ", " ", " "}, // Ligne 1
        {" ", " ", " "}
    };
    while (1 != 0)
    {
    
    ajout(ligne);
    int v = victoir_test(ligne, 1);
    affichage(ligne);

    if (v == 0){
        bot(ligne);
        v = victoir_test(ligne, 0);
        printf("le bot a jouer \n");
        affichage(ligne);
    }

    

    printf("%d", v);

    if (v == 1){
        printf("bravo tu a gagner \n");
        return 0;
        }
    if (v == 2){
        printf("dommage tu a perdue \n");
        return 0;
        }
    
    if (v == 3){
        printf("c'est un match null \n");
        return 0;
        }
    }
}
