#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* rev_string - Reverses a string
* @s: string to be reversed
*
* Return: nothing
*/

void rev_string(char *s)
{
	int i = 0;
	for (i = 0; s[i] != '\0'; ++i);
	strrev(s);
	return (i);


}
