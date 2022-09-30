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
        int i = 0;
	int sum = 0;
	int j =0;

	if (argc != 3)
	{
		printf("error\n");
		return (0);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	sum = i + j;
	
	printf("sum is %d\n", sum);
        return (0);
}
