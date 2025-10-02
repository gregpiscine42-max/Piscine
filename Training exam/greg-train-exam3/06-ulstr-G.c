#include <unistd.h>
#include <stdio.h>

            /// CORRIGE EST SOLUTION AVEC QUE MAIN

char *ft_ulstr(char *str)
{
    int i;
    i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && (str[i] <= 'z'))
        {
            str[i] = str[i] - 32;
        }

        else if(str[i] >= 'A' && (str[i] <= 'Z'))
        {
            str[i] = str[i] + 32;
        }

        else 
        {
            str[i] = str[i];
        }

        write(1, &str[i], 1);
        i++;
    }

    return(str);
}

int main(int argc, char *argv[])
{
    if (argc == 2)      // meilleure solution pour avoir une boucle avec le \n 
    {
        ft_ulstr(argv[1]);
    }

    write(1, "\n", 1);


    return(0);
}

