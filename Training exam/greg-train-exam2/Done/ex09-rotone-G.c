#include <unistd.h>
#include <stdio.h>

char *ft_rotone(char *str)
{
    int i;
    i = 0;


    while(str[i] != '\0')
    {
    
        if (str[i] >= 'a' && str[i] < 'z')
        {
            str[i] = str[i] + 1;
        }

        else if (str[i] == 'z')
        {
            str[i] = str[i] -25;
        }

        else if (str[i] >= 'A' && str[i] < 'Z')
        {
            str[i] = str[i] + 1;
        }

        else if (str[i] == 'Z')
        {
            str[i] = str[i] -25;
        }

        else
        {
            str[i] = str[i];
        }

    write(1, &str[i], 1);
    i++;

    }

    write(1, "\n", 1);
    return(str);

}

int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        ft_rotone(argv[1]);
    }

    else write(1, "\n", 1);

    return(0);
}