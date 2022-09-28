#include "main.h"
/**
 * is_palindrome - returns the 1 i s is a paliandrome
 * @s: string to be checked 
 *
 * Return: 1 if is a palonrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int r, sum = 0, temp = 0;

while (*s > 0)
{
r = *s%10;
sum = (sum * 10) + r;
*s = *s/10;
}
if (temp == sum)
{
	return (1);
}
else
{
	return (0);
}
}
