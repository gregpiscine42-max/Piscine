#include <unistd.h>
#include <stdio.h>
#include <string.h>    

			/// MEME SOLUTION QUE CORRIGE

char	*ft_strrev(char *str)
{
	int i;
	int last;
	int temp;
	i = 0;
	last = 0;
	temp = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	last = i -1 ;
	i = 0;

	while(i < last )
	{
		temp = str[i];
		str[i]=str[last];
		str[last]= temp;

		i++;
		last--;
	}

	return(str);
		
}

int main(void)
{
	char str[] = "abcdefg";

	ft_strrev(str);
	printf("result is : %s", str);

}