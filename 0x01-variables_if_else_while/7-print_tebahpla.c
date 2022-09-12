#include <stdio.h>
/**
 *main - entrty point
 *description: print alphabet
 *return: always 0 
 */
int main (void)
{
        char l;
        for (l = 'z'; l<= 'a'; --l)
{
        putchar (l);
}
        putchar ('\n');
        return(0);
}

