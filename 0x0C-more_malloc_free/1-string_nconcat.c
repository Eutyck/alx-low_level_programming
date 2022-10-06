#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatinate function
 * @s1: first string
 * @s2: second string
 * @n int for count
 *
 * Return: if fail return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	strncat (s1, s2, n);
	return (0);
}
