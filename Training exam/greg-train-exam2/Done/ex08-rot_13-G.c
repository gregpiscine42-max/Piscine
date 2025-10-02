#include <unistd.h>
#include <stdio.h>
#include <string.h>    

	

char *ft_rot_13(char *str)
{
		int i;
		i = 0;

		while(str[i] != '\0')
		{
			if((str[i] >= 'N' && str[i] <= 'Z') ||
			str[i] >= 'n' && str[i] <= 'z')					
				{
				str[i] = str[i] - 13;
				}

		// ATTENTION AU ELSE IF POUR SEPARER LA BOUCLE
			else if((str[i] >= 'A' && str[i] <= 'M')	||
			(str[i] >= 'a' && str[i] <= 'm'))
				{
				str[i] = str[i] + 13;
				}

		i++;
		}
		/// NE PAS OUBLIER LE WRITE CAR IMPOSSIBLE SANS
		/// SOURCE DE BLOQUQGE INITIAL
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
	
	if(argc == 2)
	{
		ft_rot_13(argv[1]);
	}

	else write(1, "\n", 1);
	return(0);
	//// INUTILE DE METTRE UN PRINT CAR DEJA UN WRITE

}