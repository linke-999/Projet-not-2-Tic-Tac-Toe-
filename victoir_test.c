#include <stdio.h>
#include "fonctions.h"

int victoir_test(char * ligne[3][3]){


    int vh = victoir_horizontal(ligne);;
    if (vh == 1){
        return vh;
    }
    return 0;
    
}