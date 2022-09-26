#include "main.h"
/**
 * function fills memory with constant byte
 * @b first argument character
 * @n  second argument intiger
 *@s third argument  address to the memory block
 *
 * Return pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
       while (n)
       {
	       s[n -1] = b;
       }
       return (s);
}
