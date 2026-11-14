int victoir_vertical(char * ligne[3][3]){

    int i = 0;
    int j = 0;
    int t = 0;

    while (i != 3)
    {
        while (j != 3)
        {
            if (ligne[j][i][0] == 'X'){

                t++;

                if (t == 3)
                {
                    return 1;
                }
                j++;
                continue;
            }
            j++;
        }
        j = 0;
        t = 0;
        i++;
        
    }
    return 0;
}