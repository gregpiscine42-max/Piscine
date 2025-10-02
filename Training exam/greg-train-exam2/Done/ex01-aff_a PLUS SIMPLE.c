#include <unistd.h>
#include <stdio.h>
#include <string.h>

void aff_a(char *str)
{
    int i;
    int length;
    i = 0;
    length = 0;

    while(str[i] != '\0')
    {
        i++; 
    }
    length = i;
    i = 0;

    while(str[i] != 'a')
    {
        i++;   
    }

    if(i < length)
        {
            write(1, "a", 1);
        }
        
        write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        aff_a(argv[1]);
    }

    else write(1, "a\n", 2);
    return(0);

}