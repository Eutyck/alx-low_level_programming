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
	memcpy (dest, src, sizeof(int) * n);
	return (dest);
}
