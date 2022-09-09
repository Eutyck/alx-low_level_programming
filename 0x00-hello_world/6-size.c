#include<stdio.h>
/**
*main - print the string in the put function
*
*Description: using the main function          
*this program print file as they are in ethe code
*Return: 0
*/
int main(void)
{
	char c;
	int i;
	long lo;
	long long llo;
	float f;
	printf("size of char:%ld byte(s)\n", sizeof(c));
	printf("size of int:%ld byte(s)\n", sizeof(i));
	printf("size of long int:%ld byte(s)\n", sizeof(lo));
	printf("size of long long int:%ld byte(s)\n", sizeof(llo));
	printf("size of float:%ld byte(s)\n", sizeof(f));
	return (0);
}



