#include "main.h"
/**
 * malloc_checked - function allocate memory using malloc
 * @mem: pointer to be used
 *
 * Return: if malloc failess return 98
 */
void *malloc_checked(unsigned int b)
{
	int* mem;
	 const char *s = "98";
	
	mem = (int *)malloc(b * sizeof (int));
	if (mem ==NULL)
	{
		perror (s);
	}
	return (0);
}
