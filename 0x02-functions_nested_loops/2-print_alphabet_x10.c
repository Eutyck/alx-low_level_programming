#include "main.h"
/**
 * main-start point
 * Description: display alphabet characters ten times
 *
 * Return: return 0
 */
void print_alphabet_x10 (void)
{
	int i;
	for (i = 1; i <= 10; ++i)
{
	char c;
	for (c ='a'; c <= 'z'; ++c)
	{
		_putchar (c);
	}
}
        _putchar ('\n');

}

