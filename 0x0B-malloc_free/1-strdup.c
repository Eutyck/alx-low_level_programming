#include "main.h"
/**
 * _strdup() - duplicates content in char to a pointer *str
 * @char: charater to duplicated
 * @str: pointer where chsrscter content will be stored
 *
 * Return: pointer to the duplicated string ,OR NULL if fails
 */
char *_strdup(char *str)
{
	char *st;

	st = _strdup (str);
	if (str == NULL)
		return (NULL);
	
	if (st > str)
		return (NULL);
	return (0);

}
