#include "main.h"
/**
 * malloc_checked - function allocate memory using malloc
 * @b unsigned int b to be used
 * @mem: pointer to be used
 *
 * Return: if malloc failess return 98
 */
void *malloc_checked(unsigned int b)
{
	unsigned int b = 98;
	int *mem, size;

	if (mem = (int *)malloc(size * sizeof (int)))
		return (0);
	else
	{
		perror ("b");
		exit();
	}
}
