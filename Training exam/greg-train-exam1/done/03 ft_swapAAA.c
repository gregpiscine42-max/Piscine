#include <stdio.h>


void	ft_swap(int *a, int *b)
{
    int temp;
   // temp = 0; PAS NECESSAIRE

    temp = *a; // on affecte le temp sur *a, pas l'inverse
    *a = *b;
    *b = temp;

}

 int main(void)
{
    int v1 = 10;
    int v2 = 25;

    int *a = &v1; 
    int *b = &v2; 

    ft_swap(a, b);
    printf("a= %d, b = %d", v1, v2); // ne pas oublier de mettre les 2 valeurs 2 fois
                                    // possible aussi de mettre *a, *b

}