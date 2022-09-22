#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	putchar((n % 10) + '0');
	return (0);
}
