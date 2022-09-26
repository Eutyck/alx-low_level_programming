#include "main.h"
/**
 * function that locates a character in a string
 * @s first argument string memory
 * @c seconed aregument 
 *
 * Return: pointer to spot in s with c or nul
 */
char *_strchr(char *s, char c)
{
	int 1;
	for (i = 0; *(s + i); i++)
	{
		if (*(s + 1) == c)
			return (s + i);
	}
	if (*(s + 1) == c)
		return (s = i);
	return (0);
}
