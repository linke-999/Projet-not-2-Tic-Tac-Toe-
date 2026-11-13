#include <stdio.h>
#include "fonctions.h"

char * ajout(char * ligne[3][3]){
    int i = 0;
    int j = 0;
    int int_user;
    while(1 != 0){
        
        printf("choisis un nombre entre 0 est 8 \n");
        scanf("%d" , &int_user);
    

        if (int_user == 0 || int_user == 1 || int_user == 2){
            
            int v = verif_entree(ligne, 0, int_user);
            if(v == 1){

                ligne[0][int_user] = "X";
                return ligne[3][3];
            }

            printf("la case %d est deja prise \n" , int_user);
            int c;
            while ((c = getchar()) != '\n' && c != EOF); //a expliquer dans le aide parseque sa resemble a de l'ia tellment c'est genial 
            continue;    
        }

        else if (int_user == 3 || int_user == 4 || int_user == 5){
            int v = verif_entree(ligne, 1, int_user - 3);

            if(v == 1){
                ligne[1][int_user - 3] = "X";
                return ligne[3][3];
            }

            printf("la case %d est deja prise \n" , int_user);
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }

        else if (int_user == 6 || int_user == 7 || int_user == 8){
            int v = verif_entree(ligne, 2, int_user - 6);
            if(v == 1){

                ligne[2][int_user - 6] = "X";
                return ligne[3][3];
            }
            
            printf("la case %d est deja prise \n" , int_user);
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }

        else {
            printf("Ce n'est pas un nombre accepter.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        }

    }
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
