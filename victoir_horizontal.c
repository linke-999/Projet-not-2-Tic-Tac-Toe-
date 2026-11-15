int victoir_horizontal(char * ligne[3][3], int bot_ou_user){

    int i = 0;
    int j = 0;
    int t = 0;
    char * x_o;

    if (bot_ou_user == 1)
    {
        x_o = "X";
    }
    else
    {
        x_o = "O";
    }

    while (i != 3)
    {
        while (j != 3)
        {
            if (ligne[i][j][0] == *x_o){

                t++;
                if (t == 3 && x_o == "X")
                {
                    return 1;
                }
                else if (t == 3 && x_o == "O")
                {
                    return 2;
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