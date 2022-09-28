#include "main.h"
/**
 * is_palindrome - returns the 1 i s is a paliandrome
 * @s: string to be checked 
 *
 * Return: 1 if is a palonrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0, flag = 1, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len/2;i++)
	{
		if (s[i] != s[len - 1 - i])
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

