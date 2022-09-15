#include "main.h"
/**
*main-start point
*Description: show if number is an alphabet
*Return: return 1 if alphabetic else 0
*/
int _isalpha(int c)
{
int var = 'a';
if (isalpha (var))
{
_putchar (var + '1');
}
else
{
_putchar (var + '0');
}
return (0);
}
