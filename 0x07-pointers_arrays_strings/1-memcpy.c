#include "main.h"
/**
 * coppying  memory addres from src to dest
 *
 * @dest first agument char
 * @src seconf argument char
 * @n third argumeny  n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	for (; i < n; 1++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
