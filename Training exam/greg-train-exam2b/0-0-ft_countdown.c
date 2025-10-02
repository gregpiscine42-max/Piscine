#include <unistd.h>
#include <stdio.h>
#include <string.h>

/// POSSIBLE WRITE SIMPLE

void ft_countdown (void)
{
	char c;
    c = '9';
	
	while (c >= '0')
		{
			write(1, &c, 1);
            c--;
		}
	
	
    write(1, "\n", 1);
}


int main(void)
{
    
    ft_countdown ();

}