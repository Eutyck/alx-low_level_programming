#include <stdio.h>
/**
 * main-start point
 * Description:pringrame print 1 to 9
 * Return :return  0 if correct
 */
int main (void)
{
	int c;
	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
