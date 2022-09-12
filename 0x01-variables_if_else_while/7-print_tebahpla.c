#include <stdio.h>
/**
 *main - entrty point
 *Description: print alphabet in revers
 *Return: 0 
 */
int main (void)
{
        char l;
        for (l = 'z'; l >= 'a'; l--)
{
        putchar (l);
}
        putchar ('\n');
        return(0);
}

