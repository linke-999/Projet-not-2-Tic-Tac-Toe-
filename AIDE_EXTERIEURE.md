je n'ai que trés peux utiliser d'aide exterieur pour se projet 

100 % de la logique vient de moi

je ne l'ai utiliser que pour de la recherhce de bug notament ici :
ia : claude sonnete 5.5

(je lui envoie les chier de mon code en meme temp)
pprompt :
regrade 

Projet-not-2-Tic-Tac-Toe- git:(main) ✗ ./morpions
choisis un nombre entre 0 est 8 
0
 X |   |  
---+---+---
   |   |  
---+---+---
   |   |  
[4]    143577 segmentation fault (core dumped)  ./morpions
➜  Projet-not-2-Tic-Tac-Toe- git:(main) ✗ ./morpions
choisis un nombre entre 0 est 8 
2
   |   | X
---+---+---
   |   |  
---+---+---
   |   |  
tennte de mettr  en memorie 
le bot a jouer 
   |   | X
---+---+---
   | O |  
---+---+---
   |   |  
choisis un nombre entre 0 est 8

je supose que l'erreur de core ddumped vient de mon generateur daleatoir 
mais pourquoi ?




il me repond 

Ton intuition est à moitié bonne : le crash vient bien de bot.c, mais ce n’est pas le générateur qui est cassé, c’est ce que tu en fais.

Trace avec des valeurs

rand() % 8 donne quels nombres possibles ? (Fais le calcul : quel est le plus petit reste, le plus grand ?)
Ton tableau est 3x3. Quels indices sont valides pour y et x ?
Si y = 5 et x = 6, que lit ligne[y][x][0] ? Tu retombes sur le même problème que ligne[3][3] : tu lis hors du tableau, tu obtiens un « pointeur » qui est n’importe quoi, puis tu le déréférences avec [0]. Segfault.

Ça explique aussi pourquoi ça plante « parfois » : quand x et y tombent tous les deux entre 0 et 2, tout va bien (ton deuxième essai, le bot a joué en 1,1 par chance). Sinon, crash.


est la j'ai comprie que je devait mettre deux est pas huite


il y avait aussi se moment ou un if ne marcher pas 
prompt :

regarde pourquoi le if(ligne[i][user] == " "){

ne marcche pas ?
il me retourne forcement 0

il me dit dutiliser strcmp apprés lui avoir demander s'il n'y avait pas plus simple il ma dit de juste fair if (ligne[i][user][0] == ' ') { se qui marche nique


normalemnt c'est tout le reste a été soit fait soit résolue grace au canard comme rajouter

int c;
while ((c = getchar()) != '\n' && c != EOF);

dans tout les if de ajout car sinon sa boucler a l'infinie