#include "main.h"
/**
 * swap_int - swaps two integers' values 
 * @a: paramiter
 * @b: paramiter
 *
 * Return: alway 0
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	
	*a = *b;
	*b = tmp;
}
