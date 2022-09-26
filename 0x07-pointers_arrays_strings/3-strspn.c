#include "main.h"
/**
 * getting length of prefix substring
 * @s: string to check
 *@accept: string to check againist
 *
 * Return:number  of bytes of s in aganist
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	
	for  (i = 0; s[i]; i++)
	{
		for  (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept [j])
                                return  (s + i);
	}
	return (0);
	
}
