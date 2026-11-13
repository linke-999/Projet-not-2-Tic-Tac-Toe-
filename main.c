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

    printf(" %s | %s | %s\n"
           "---+---+---\n"
           " %s | %s | %s\n"
           "---+---+---\n"
           " %s | %s | %s\n",
            ligne[0][0], ligne[0][1], ligne[0][2],
            ligne[1][0],ligne[1][1], ligne[1][2],
            ligne[2][0], ligne[2][1], ligne[2][2]);
    }
}
