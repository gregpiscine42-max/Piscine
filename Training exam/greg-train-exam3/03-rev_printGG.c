#include <unistd.h>
#include <stdio.h>

char *ft_rev_print (char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    j = i - 1;    // CAR LA BOUCLE VA JUQU A LA FIN AVEC LE \0

    while (j >= 0)
    {
        write(1, &str[j], 1);
        j--;

    }

     write(1, "\n", 1);

     return (str);
}

int main(void)
{
    char str[] = "dub0 a POIL";
    ft_rev_print(str);
//  printf("result : %s\n", str);  // NE SERT A RIEN CAR UNIQUEMENT WRITE
                                    // AVEC STR QUI NE BOUGE PAS
}

