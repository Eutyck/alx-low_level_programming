#include "main.h"
/**
 * main - updates te value of the pointer  to 98
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	*n = 98;
	*n = n;
	putchar (n);
	return (0);
}
