#include <stdio.h>
#include "fonctions.h"

int victoir_test(char * ligne[3][3], int bot_ou_user){


    int vh = victoir_horizontal(ligne, bot_ou_user);
    
    if (vh != 0){
        return vh;
    }

    int vv = victoir_vertical(ligne, bot_ou_user);
    
    if (vv != 0){
        return vv;
    }

    int vd = victoir_diagonal(ligne, bot_ou_user);

    if (vd != 0){
        return vd;
    }

    int nulle = null_test(ligne);

    if (nulle != 0){
        return nulle;
    }

    return 0;
}