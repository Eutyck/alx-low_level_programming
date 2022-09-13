#include "main.h"
/**
 * main-start point
 * Description: function check lower charater
 * Return: retun 1 if in lower or 0 otherwise
 */
int main ()
{
	int n ='q';
	if ( islower (n))
	{
		printf ("%c is a lowercase\n",n);
	}
	else 
	{ 
		printf ("%cin not in lowercase\n",n);
	}
	return (0);
}

