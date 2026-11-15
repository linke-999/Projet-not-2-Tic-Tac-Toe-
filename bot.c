#include <time.h>
#include <stdlib.h>
#include <stdio.h>

char * bot(char * ligne[3][3]){



    while (1 != 0)
    {
        srand(time(NULL));
        int y = rand() % 8 + 1;
        srand(time(NULL));
        int x = rand() % 8 + 1;
            if(ligne[y][x][0] == ' '){
                printf("tennte de mettr  en memorie \n");
                ligne[y][x] = "O";
                return ligne[3][3];

            }
    }

}