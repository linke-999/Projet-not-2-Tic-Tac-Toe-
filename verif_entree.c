#include <stdio.h>
#include "fonctions.h"

int verif_entree(char * ligne[3][3] ,int i, int user){

    if(ligne[i][user][0] == ' '){

        return 1;
    }

    return 0;
}