#include "main.h"
#include <stdio.h>
/**
 * main - this program displays no of argumens passed
 *
 * @argc: number of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)*argv[0];
	printf ("argc = %d\n", argc);
	return (0);
}
