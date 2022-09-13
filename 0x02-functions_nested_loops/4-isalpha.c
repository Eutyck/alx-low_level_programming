#include "main.h"
#include <stdio.h>
/**
*main-start point
*Description: show if number is an alphabet
*Return: return 1 if alphabetic else 0
*/
int main ()
{
int var = 'a';
if (isalpha (var))
{
printf ("%c is an alphabet\n",var);
}
else
{
printf ("%c is not an alphabet\n",var);
}
return (0);
}
