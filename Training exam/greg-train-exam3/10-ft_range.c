#include <unistd.h>

int     *ft_positive(int n)
{
    if(n<0)                 // on peut supprimer les {}
        return(-n);
    return(n);
}


int     *ft_range(int start, int end)
{
    int i;
    int size;
    int *tab;
    i = 0;

    size = ft_positive(end-start) +1;  // NE PAS OUBLIER LE +1

    tab = (int*)malloc(sizeof(int)* size);// 1er in* entre() et ne pas oublier la derniere *

    if( tab == NULL)  // uniquement tab
        return(NULL);
    

    if(start <=e nd)
    {
        while(i < size)
        {
            tab[i] = start + i; // on commence bien par start
            i++;
        }
    }

    if(start > end)
    {
        while(i<size)
        {
            tab[i] = start - i; // on commence bien par start
            i--;
        }
    }
    
    return(tab);   // c'est le tableau que l'on retourne

}

int main(void)
{
    int start;
    int end;

    start = 1;
    end = 3;

    ft_range(int start, int end);
    return(0);
}