#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_aff_first_param(char *str)
{
    int i;
    i = 0;

    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }

    write(1, "\n", 1);
    return(0);

}


int main(int argc, char* argv[])
{
    if(argc < 1)
    {
        write(1, "\n", 1);
    }

    ft_aff_first_param(argv[1]);

}