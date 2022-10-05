#include <stdio.h>
#include <stdlib.h>
/**
 * array - create and 2d array
 * @width: row integers
 * @height: collum interges
 *
 * Return: return NULL on failure else 0
 */
int **alloc_grid(int width, int height)
{
	int i, j, cont;

	int** alloc_grid = (int**)malloc(width * sizeof(int));
	for (i = 0; i < width; i++)
		alloc_grid[i] = (int *)malloc(height * sizeof(int));
	cont = 0;
	
	for (i = 0; i < width; i++)
        for (j = 0; j < height; j++)
            alloc_grid[i][j] = ++cont;
	for (i = 0; i < width; i++)
        for (j = 0; j < height; j++)
	for (i = 0; i < width; i++)
        free(alloc_grid[i]);

	free (alloc_grid);
	return (0);


}
