#include <stdio.h>

char * ajout(char * ligne[3][3]){
    int i = 0;
    int j = 0;
    int int_user;
    printf("choisis un nombre entre 0 est 8 \n");
    scanf("%d" , &int_user);
    

    if (int_user == 0 || int_user == 1 || int_user == 2){

        ligne[0][int_user] = "X";
        
    }
    if (int_user == 3 || int_user == 4 || int_user == 5){

        ligne[1][int_user - 3] = "X";

    }
    if (int_user == 6 || int_user == 7 || int_user == 8){

        ligne[2][int_user - 6] = "X";

    }

    return ligne[3][3];





}
int boucle(char * ligne[3][3]){
    int i = 0;
    int j = 0;

    while (i != 3)
    {
        while (j != 3)
        {
            printf("ligne %d lettre %s \n", i, ligne[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }
}
