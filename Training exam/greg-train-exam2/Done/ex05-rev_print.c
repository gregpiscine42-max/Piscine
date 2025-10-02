#include <unistd.h>
#include <stdio.h>
#include <string.h>    

char *ft_rev_print (char *str)
{
	int i;
	int last;
	i = 0;
	last = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	last = i - 1;

	i = 0;

	while (last >= 0)
	{
		write (1, &str[last], 1);   //// UNIQUEMENT UN WRITE QUI EST DEMANDE !!!!!
								/// IL FAUT TESTER AVEC a.out | cat -e

		last--;
	}

	write(1, "\n", 1);

	return(str);
		
}

int main(void)
{
	char str[] = "dubO a POIL";

	ft_rev_print(str);
//	printf("result calculation is : %s\n", ft_rev_print(str)); PAS BESOIN
	return(0);

}


