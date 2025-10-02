#include <unistd.h>
#include <stdio.h>
#include <string.h>

////   VERIFIER QUE OK
void ft_putchar(char* str)
{
    int i;
    i = 0;

    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }

        write(1, "\n", 1);
}

int main(int argc, char* argv[])
{

int i = 0;
i = argc - 1;

if (argc != 2)
{
    write(1, "\n", 1);
}

    ft_putchar(argv[i]);

}