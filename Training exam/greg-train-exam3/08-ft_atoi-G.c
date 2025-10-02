#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int i;
    int sign;
    int sum;
    i = 0;
    sign = 1;
    sum = 0;


    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))  // A SAVOIR PAR COEUR
    {
        i++;
    }

    while (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')  // &&
    {
        sum = (sum * 10) + (str[i] - '0'); // A SAVOIR PAR COEUR
        i++;
    }

    return (sign * sum);
    
}

int main(void)
{
    const char *str = "   --+-+-+-87987789**"; // *str sans les []
                /// ft_atoi ne va convertir en entier que 
                // lorsqu’il trouve des chiffres après les espaces et les signes.
                // pas mettre de chiffre au debut

    int result = ft_atoi(str); // solution pour ne pas lancer la fonction 2 fois
                                // avec @eme fois dans printf
    printf("result is : %d", result);
}

