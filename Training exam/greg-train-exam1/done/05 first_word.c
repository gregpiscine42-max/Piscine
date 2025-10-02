#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *first_word(char *str)
{
	int i;
	i = 0;

    // permet de detecter le premier espace ou tab
	while(str[i] == ' ' || str[i] == '\t')  
    {
        i++;
    }

    // wrtite tant que pas espce, tab ou \0
    while(str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    
    write(1, "\n", 1);
    
    return(0);
        
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        first_word(argv[1]);
    else
        write(1, "\n", 1);
    return (0);
}
//    printf("result is : %s\n", first_word(str));
