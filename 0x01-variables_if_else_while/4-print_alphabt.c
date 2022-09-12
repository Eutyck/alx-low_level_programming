#include<stdio.h>
/**
 *Description: print all alphabetic letters
 *
 *use of putchar
 *Return: the code returns 0
 */
int main (void)
{
	char d,a;
	for (d = 'a'; d <= 'z'; d++)
	{
		if  (d != 'e' && d != 'q')
		{
			putchar (d);
		}
	}
	putchar ('\n');
	return (0);

	
}
