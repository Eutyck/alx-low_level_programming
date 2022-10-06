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
	int* mem;
	
	mem = (int *)malloc(b * sizeof (int));
	if (mem ==NULL)
	{
		perror ("98");
	}
	return (0);
}
