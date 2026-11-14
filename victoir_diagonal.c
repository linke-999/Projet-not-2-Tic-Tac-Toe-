int victoir_diagonal(char * ligne[3][3]){

    int i = 0;
    int j = 0;
    int t = 0;

    while (i != 3)
    {
        if (ligne[j][i][0] == 'X'){
            t++;
            if (t == 3){
                return 1;
            }
        }
        j++;
        i++;
    }
    return 0;
}