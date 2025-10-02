#include <unistd.h>
#include <stdio.h>

char *ft_rev_print (char *str)
{
    int i;
    int last;
    int temp ;
        
    i = 0;
    last = 0;
    temp = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    last = i - 1;

    i = 0;
    while (i < last)
    {
        temp = str[i];
        str[i] = str[last];
        str[last] = temp;
        i++;
        last--;

    }
    return(str);
}

int main(void)
{
    char str[] = "dub0 a POIL";
    ft_rev_print(str);
    printf("result is : %s", str);
}

