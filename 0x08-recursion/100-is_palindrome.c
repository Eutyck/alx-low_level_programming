#include "main.h"

/**
 * is_palindrome - returns the 1 i s is a paliandrome
 * @s: string to be checked 
 *
 * Return: 1 if is a palonrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int flag = 1;

	checks(s, 0, _strlen_recursion(s) - 1 &flag);
	return (flag);
}

/**
 * is_palindrome - returns the 1 i s is a paliandrome
 * @s: string to be checked
 * @start: start index
 * @end: end index 
 *
 * Return: void
 */
void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end + 1, flag);
	}
}

/**
 * is_palindrome - returns the 1 i s is a paliandrome
 * @s: string to be checked 
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}


