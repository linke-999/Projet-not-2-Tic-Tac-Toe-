#ifndef FONCTIONS_H
#define FONCTIONS_H

char * ajout(char * ligne[3][3]);
int verif_entree(char * ligne[3][3] ,int i, int user);
int victoir_test(char * ligne[3][3]);
int victoir_horizontal(char * ligne[3][3]);
int victoir_vertical(char * ligne[3][3]);

#endif