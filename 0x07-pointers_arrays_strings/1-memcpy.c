i#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 *
 * Return: pointer to the copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
<<<<<<< HEAD
	for (; i < n; 1++)
=======

	for (; i < n; i++)
>>>>>>> d26ff1e0dba07b57a2f7f9b3b8dc45086f83a6e3
	{
		dest[i] = src[i];
	}

	return (dest);
}
