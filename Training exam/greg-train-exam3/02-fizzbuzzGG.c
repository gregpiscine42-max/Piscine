#include <unistd.h>
#include <stdio.h>

int ft_fizzbuzz(void)
{
    write(1, "1\n", 2);
    write(1, "2\n", 2);
    write(1, "fizz\n", 5);

    return(0);
}

int main(void)
{
    ft_fizzbuzz();
}

