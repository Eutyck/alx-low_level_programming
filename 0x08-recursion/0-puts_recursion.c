#include "main.h"

/**
 * _puts_resusion -prints a string followed by a new line
 * @a: sring to be printend
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}

