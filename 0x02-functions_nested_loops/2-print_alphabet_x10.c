#include <stdio.h>
/**
 * main-start point
 * Description: display alphabet characters ten times
 *
 * Return: return 0
 */
int main (void)
{
	int i;
	for (i = 1; i <= 10; ++i)
{
	char c;
	for (c ='a'; c <= 'z'; ++c)
	{
		putchar (c);
	}
}
        putchar ('\n');
        return (0);

}

