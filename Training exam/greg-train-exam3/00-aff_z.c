#include <unistd.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{	
    (void)argv;
    (void)argc;

    write(1, "z/n", 2);
    return(0);  
}