#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_maff_alpha (char *str)
{
    int i;     //// POSSIBLE DE FAIRE JUSTE UN WRITE
    i = 0;

    while (i <= 25)
    {
        if(i % 2 == 0)
        {
            str[i] = str[i] - 32;
            write(1, &str[i], 1);
        }

        else
        {
            write(1, &str[i], 1);
        }

        i++;
    }

    write(1, "\n", 1);
    return(0);
	 
}


int main(void)
{
    char str [] = "abcdefghijklmnopqrstuvwxyz";
    ft_maff_alpha(str);

}