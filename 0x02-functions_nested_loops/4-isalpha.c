#include "main.h"
/**
*main-start point
*Description: show if number is an alphabet
*Return: return 1 if alphabetic else 0
*/
int _isalpha(int c)
{
int c = 'a';
if (isalpha (c))
{
_putchar (c + '1');
}
else
{
_putchar (c + '0');
}
}
