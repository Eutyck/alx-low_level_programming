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
        pr_uint(-(unsigned int)n);
    } else
        pr_uint(n);
    putchar('\n');

	return (0);
}
