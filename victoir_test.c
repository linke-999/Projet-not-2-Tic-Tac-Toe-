#include <stdio.h>
#include "fonctions.h"

int victoir_test(char * ligne[3][3]){


    int vh = victoir_horizontal(ligne);
    
    if (vh == 1){
        return vh;
    }

    int vv = victoir_vertical(ligne);
    
    if (vv == 1){
        return vv;
    }

    int vd = victoir_diagonal(ligne);

    if (vd == 1){
        return vd;
    }
    return 0;
    
}