#include <unistd.h>
#include <stdio.h>
#include <string.h>


char    *ft_strcpy(char *s1, char *s2)
{
    int i;
    i = 0;

    while(s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }

    s2[i] = '\0';

    return(s2);
}     

int main(void)
{
    char s1[] = "hello word";
    char s2[] = "toto";
//    printf("result function is : %s\n", strcpy(s1, s2));
    ft_strcpy(s1, s2);
    printf("result calc is : %s\n", s2);
}