#include <unistd.h>
#include <stdio.h>
#include <string.h>    

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int main(void)
{
	char str[] = "hello";
	
	ft_strlen(str);
	printf("result calculation is : %i\n", ft_strlen(str));
//	printf("result function  is : %i\n", strlen(str));
}
