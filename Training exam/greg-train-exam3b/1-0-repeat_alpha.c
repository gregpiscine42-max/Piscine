#include <unistd.h>
#include <stdio.h>
#include <string.h>


// A FAIRE A LA MANO AVEC SOUS FONCTIONS CAR SINON TROP COMPLIQUE

char *ft_repeat_alpha(char *str )
{
    int i;
    i = 0;
    
    while(str[i] != '\0')
    {
    if (str[i] == 'a')
        write(1, "a", 1);
    else if (str[i] == 'b')
        write(1, "bb", 2);
    else if (str[i] == 'c')
        write(1, "ccc", 3);
    else
        write(1, &str[i], 1);
    i++;
    }

    return(str);
}


int main(int argc, char *argv[])
{	
    if(argc ==2)
    {
        ft_repeat_alpha(argv[1]);
    }

    else write(1, "x/n", 2);
    return(0);  
}