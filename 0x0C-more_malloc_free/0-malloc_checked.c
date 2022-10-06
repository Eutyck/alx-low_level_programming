#include "main.h"
/**
 * malloc_checked -  allocate memory of mem using malloc
 * @b: memeory to be allocated
 *
 * Return: if malloc failess return 98
 */
void *malloc_checked(unsigned int b)
{
	void* mem;
	int s = 98;
	
	mem = (int *)malloc(b * sizeof (int));
	if (mem ==NULL)
		exit(s);
	return (p);
}
