int victoir_diagonal(char * ligne[3][3],  int bot_ou_user){

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
        if (ligne[j][i][0] == *x_o){
            t++;
            if (t == 3 && x_o == "X")
            {
                return 1;
            }
            if (t == 3 && x_o == "O")
            {
                return 2;
            }
            
        }
        j++;
        i++;
    }
    return 0;
}