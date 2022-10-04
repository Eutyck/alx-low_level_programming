#include "main.h"
/**
 * create_array - create array of characters
 * @c: character to store the array
 * @size: interger for the count
 * @*arry: arry to be used
 *
 * Return: return poiter to array if succes or  NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		 return (NULL);
	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);
	
	for (index = 0; index < size; index++)
			array[index] = c;
	
	return (array);
}
