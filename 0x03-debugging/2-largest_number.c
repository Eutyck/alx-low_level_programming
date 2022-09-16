#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int s, int l, int c)
{
int largest;
if (s >= l && l >= c)
{
largest = s;
}
else if (l >= s && l >= c)
{
largest = l;
}
else
{
largest = c;
}
return (largest);
}
