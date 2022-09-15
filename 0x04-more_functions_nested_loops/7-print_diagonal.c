#include <stdio.h>
#include "main.h"

/**
*print_diagonal - prints a diagonal
*@n: parameter
*Return: returns nothing
*/

void print_diagonal(int l)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < l; len++)
		{
			for (space = 0; space < len; space++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (len == (l - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}                                                                   
~   
