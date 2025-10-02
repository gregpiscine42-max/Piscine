#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)  // void car sortie non memorisee
							// (char c) car entree est un char pour la fonction write
{
	write(1, &c, 1); // on pointe bien a l'adresse de c
						// dernier 1 est le nombre de caractere
}

int main(void)   // main a forcement int comme entree
					// void car on ne memorise rien
{
	char c = 'z';  //  'z' car int est ce que la fonction renvoie
	  				// et non "z" qui serait un char (+ voir ci-dessous, cas impossible)
					// il serait aussi possible de fair int c = 'z' 
				//  si void ft_putchar(int c)
	ft_putchar(c);
	return(0)		// int est independant des variables 
}

/*IL AURAIT ETE PLUS SIMPLE DE FAIRE /////////////////////////
 
* int		main(void)
{
	write(1, "z", 1);
}

/////////////////////////
Par ailleurs pas possible d'avoir le code suivant
lcar la fonction main doit obligatoirement avoir comme type de retour int 
et non pas char.


char main(void)
{
    char c = "z";

    ft_putchar(c);

}
