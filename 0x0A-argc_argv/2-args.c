#include "main.h"
/**
 * best - return the factorial of a given number
 * @argc: int to be used
 *@argv[]: char display arguments
 *
 * Return: 0 
 */
int best(int argc, char *argv[])
{
	int i;
	
	printf("argc = %d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
