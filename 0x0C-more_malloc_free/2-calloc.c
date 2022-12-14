#include "main.h"
/**
 * _calloc - allocate memory for an arry, using malloc
 * @nmeb: number of elementsin the array
 * @size: size of byte in elements
 *
 * Return: void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size ==0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	       p[i] = 0;
	return (p);
}
