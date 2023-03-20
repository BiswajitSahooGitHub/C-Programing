#include <stdio.h>       
#include <errno.h>       
#include <stdlib.h>       
#include <string.h>       
 
extern int errno;
 
void main()
{
    char *ptr = malloc( 1000000000UL);
    if (ptr == NULL)  
    {  
        puts("malloc failed");
        puts(strerror(errno));
        exit(EXIT_FAILURE);
    }
    else
    {
        free( ptr);
        exit(EXIT_SUCCESS);      
    }
}
