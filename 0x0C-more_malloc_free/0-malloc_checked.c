#include "main.h"
/**
 * malloc_checked -  allocate memory of mem using malloc
 * @mem: pointer to be used
 *@s: integer ruturn error
 * Return: if malloc failess return 98
 */
void *malloc_checked(unsigned int b)
{
	int* mem;
	int s = 98;
	
	mem = (int *)malloc(b * sizeof (int));
	if (mem ==NULL)
	{
		exit(s);
	}
	return (0);
}
