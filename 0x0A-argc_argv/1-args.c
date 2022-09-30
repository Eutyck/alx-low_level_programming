#include "main.h"
#include <stdio.h>
/**
 * main - this program prints its name
 *
 * @argc: number of arguments
 * @argv: string of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)*argv[0];

	printf ("argc = %d\n", argc -1);
	return (0);
}
