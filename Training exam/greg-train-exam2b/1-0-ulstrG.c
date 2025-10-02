#include <unistd.h>
#include <stdio.h>
#include <string.h>


char *ft_ulstr(char *str)
{
    int i;
    i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] -32;
            
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] +32;
    
        i++;    

  // AJOOUT D'UN ELSE POUR L'EXEMPLE
  //      else
  //      str[i] = 'z';   
    }

    i = 0;
    while(str[i] != '\0')
    {
       write(1, &str[i], 1);
       i++;
    }

    write(1, "\n", 1);
    return(str);

}

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
       write(1, "\n", 1);
    }
 
   ft_ulstr(argv[1]);
   return(0);
}