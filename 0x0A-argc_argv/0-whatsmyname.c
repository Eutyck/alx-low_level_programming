#include "main.h"
#include <stdio.h>
/**
 * main - print program name
 * @argc: int agrument show counts
 * @argv: char shows the name
 *
 * Return 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf ("The name is: argv[%d] = %s\n", i,  argv[i]);
	}	
	return (0);
}
