#include "main.h"

/**
*  _strcmp - Function which compare two strings and
*@s1: first string
*@s2:second string
*Return:
*		returns zero if s1 == s2
*		returns negative number if s1 < s2
*		returns positive number if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	if (strcmp (s1, s2) < 0)
	{
		printf ("s1 is less than s2");
	}
	else if (strcmp (s1, s2) == 0)
	{
		printf ("s1 is equalto s2");
	}
	else
		printf ("s1 is greater than s2");

	return (0);
}
