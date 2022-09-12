#include <stdio.h>
/**
 * main- start point
 * Description: print hexxa decimal
 * Return: 0
 */
int main (void)
{
	char d,a;
        for (d = '0'; d <= '9'; d++)
        {
                putchar (d);
        }
	for (d = 'a'; a <= 'f'; d++)
	{
		putchar (d);
	}
        putchar ('\n');
        return (0);
}

