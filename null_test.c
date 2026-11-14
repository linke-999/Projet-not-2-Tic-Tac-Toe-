#include <stdio.h>

int null_test(char * ligne[3][3]){

    int i = 0;
    int j = 0;
    int t = 0;

    while (i != 3)
    {
        while (j != 3)
        {

            if (ligne[i][j][0] == ' '){

                t++;
                j++;
                continue;
            }
            
            if (t == 0)
            {
                return 3;
            }
            
            j++;

        }
        j = 0;
        i++;
        
    }
    return 0;
}