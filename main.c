#include <stdio.h>
#include "fonctions.h"

int main(void) {

    char * ligne[3][3] = {
        {"O", " ", " "}, // Ligne 0
        {"X", "O", "O"}, // Ligne 1
        {"O", "X", "X"}
    };
    while (1 != 0)
    {
    
    ajout(ligne);
    int v = victoir_test(ligne);

    

    printf(" %s | %s | %s\n"
           "---+---+---\n"
           " %s | %s | %s\n"
           "---+---+---\n"
           " %s | %s | %s\n",
            ligne[0][0], ligne[0][1], ligne[0][2],
            ligne[1][0],ligne[1][1], ligne[1][2],
            ligne[2][0], ligne[2][1], ligne[2][2]);

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
