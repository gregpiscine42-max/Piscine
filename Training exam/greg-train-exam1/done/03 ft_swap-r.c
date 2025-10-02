PLUTOT REGARDER LE CODE DANS GREG REVIEW



#include <unistd.h>
#include <stdio.h>

void ft_swap (int*a, int*b)
{
int temp;
temp = 0;

temp = *a;
*a = *b;
*b = temp;
}
int main(void)
{
    int v1 = 10;
    int v2 = 20;

    int *a = &v1;
    int *b = &v2;

    ft_swap(a, b);
    printf("les valeurs sont %i et %i", v1, v2);