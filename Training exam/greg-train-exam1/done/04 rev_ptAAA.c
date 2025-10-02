#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_rev_print (char *str)
{
    int last;
    int i ;
    char temp;
    last = 0;          // SOLUTION EN CORRIGE BCP PLUS SIMPLE
    i = 0;				/// OU JUSTE WRITE LAST SANS PASSER PAR CHGT DE STRING
    temp = 0;			//// A MON AVIS MIEUX SI PAS DROIT DE TOUCHER STRING

    while(str[i] != '\0')
    {
        i++;
    }
    last = i-1; /// SUPER IMPORTANT car permet d'enlever le \0 de la fin

    i = 0;
   while(str[i] != '\0')
    {
        temp = str[i];
        str[i] = str[last];
        str[last] = temp;

        i++;
        last--;
    }

    i = 0 ;
   while(str[i] != '\0') 
    {
        write(1, &str[i], 1);  /// on ecrit &str[i] et pas &[i] comme je l'ai fait initialement
        i++;
    }

    write(1, "\n", 1); // attention au "" dans le write

    return(str);


}

int  main(void)
{
    char str[] = "dub0 a POIL";
    ft_rev_print (str);
    printf("result is : %s", str);
}