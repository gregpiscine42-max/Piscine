#include <unistd.h>
#include <stdio.h>
#include <string.h>


// REPONSE CHAT QUI ME SEMBLE COMPLIQUEE 
// FAIRE A LA MANO

#include <unistd.h>

int get_repeat_count(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 'a' + 1);
    else if (c >= 'A' && c <= 'Z')
        return (c - 'A' + 1);
    return (1);
}

void print_repeated(char c, int count)
{
    int i = 0;
    while (i < count)
    {
        write(1, &c, 1);
        i++;
    }
}

char *ft_repeat_alpha(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        print_repeated(str[i], get_repeat_count(str[i]));
        i++;
    }
    return (str);
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        ft_repeat_alpha(argv[1]);
    else
        write(1, "\n", 1);
    return (0);
}
