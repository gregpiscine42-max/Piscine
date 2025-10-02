#include <unistd.h>
#include <stdio.h>
#include <string.h>

//// solution corrigee plus compliquee avec un break

char* ft_aff_a(char *str)
{
    int i;
    i = 0;
    
    while(str[i] != 'a' && str[i] != '\0')
    {
        i++;
    }

    if (str[i] == 'a')
    {
        write(1, "a\n", 2);
    }

    else 
    {
        write(1, "\n", 1);
    }

    return(str);
}


int main(int argc, char**argv)
{
    if (argc == 2)
    {
        ft_aff_a(argv[1]);
    }

    else write(1, "\n", 1);
    return 0;
}