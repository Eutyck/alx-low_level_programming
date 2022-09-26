#include "main.h"
/**
 * function fills memory with constant byte
 * @b char to be use
 * @n  number of bytes to be used
 *@s address to the memory block
 *
 * Return pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
       while (n)
       {
	       s[n -1] = b;
	       n --;
       }
       return (s);
}
