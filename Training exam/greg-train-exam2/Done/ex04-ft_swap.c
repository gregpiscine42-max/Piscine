#include <unistd.h>
#include <stdio.h>
#include <string.h>    

void	ft_swap(int *a, int *b)
{
	int temp;
	temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	char str[] = "hello";

	int 	v1 = 10;
	int 	v2 = 20;
	int *a = &v1;
	int *b = &v2;

	ft_swap(a, b);
	printf("result calculation is : v1 = %i and v@ = %i\n", v1, v2);

}
