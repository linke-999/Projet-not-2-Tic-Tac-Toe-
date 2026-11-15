#include <time.h>
#include <stdlib.h>
#include <stdio.h>

char * bot(char * ligne[3][3]){



    while (1 != 0)
    {
        srand(time(NULL));
        int y = rand() % 3;
        srand(time(NULL));
        int x = rand() % 3;
            if(ligne[y][x][0] == ' '){
                ligne[y][x] = "O";
                return ligne[3][3];

            }
    }

}