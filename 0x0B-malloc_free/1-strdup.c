#include "main.h"
/**
 * _strdup - duplicates content in char to a pointer *str
 * @str: pointer where chsrscter content will be stored
 *
 * Return: pointer to the duplicated string ,OR NULL if fails
 */
char *_strdup(char *str)
{
	char *st;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		i++;

	st = malloc(sizeof(char) *(len + 1));

	if (st == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
	{
		st[index] = str[index];
	}
	st[len] = '\0';

	return (st);

}
