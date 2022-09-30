#include "main.h"
#include <stdio.h>
/**
 * main - this programe get product of integes
 *
 * @argc: number of arguments
 * @argv: string of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
        int i = 0;
	int product = 0;
	int j =0;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	product = i * j;
	
	printf("product is %d\n", product);
        return (0);
}
