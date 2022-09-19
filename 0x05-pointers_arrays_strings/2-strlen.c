#include "main.h"

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns length as integer;
 */
int _strlen(char *s)
{
	int i = 0;
	for (i = 0; str[i] != '\0'; ++i);
	return (i);
}
