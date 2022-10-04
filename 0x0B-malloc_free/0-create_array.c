#include "main.h"
/**
 * create_array - create array of characters
 * @c: character to store the array
 * @size: interger for the count
 * @index: unsigend int for count
 * @*arry: arry to be used
 *
 * Return: return poiter to array if succes or  NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		 return ("NULL");
	}
	else
	{
		array=(void*)malloc(size * sizeof (char));

		for (index = 0; index < size; index++)
		{
			array[index] = c;
		}
		free(array);
	}
	return (0);
}
