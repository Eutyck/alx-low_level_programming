#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatinate function
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to copy
 *
 *Return:char pointer to newly allocated place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *p;

	if (s1 ==NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j < n)
		j = n;
	p = malloc(sizeof(char) * (i +j + 1));
	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (k = 0; k < j; k++)
                p[k + i] = s2[k];
	p[i + j] = '\0';
	return (p);
}
	
