#include <unistd.h>
#include <stdio.h>
#include <string.h>    

// solution bcp trop compliquee au depart
// solution est in fine bcp plus simple en respectant le decoulement logique

char *first_word (char *str)
{
	int i;
	i = 0;

	while((str[i] == ' ' || str[i] == '\t'))
		{
			i++;
		}

	while(str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
		

	write(1, "\n", 1);
	return(0);
		
}

int main(int argc, char *argv[] )
{
	if (argc == 2)
	{
		first_word(argv[1]);  //// ATTENTION AU [1]
	}
	
	else write(1, "\n", 1);
	return(0);

}


