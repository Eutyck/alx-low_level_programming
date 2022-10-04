#include "main.h"
/**
 * create_array - create array of characters
 * @char: character to store the array
 * @int: interger for the count
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
