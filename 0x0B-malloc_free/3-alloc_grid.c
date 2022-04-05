#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width; The width of the array
 * @height: The height of the array
 *
 * Return: The pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid_var;
	if (width <= 0 || height <= 0)
	       return (NULL);

	grid_var = malloc(height * sizeof(int *));

	if (grid_var == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid_var[i] = malloc(width * sizeof(int));
		if (grid_var[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(grid_var[i]);
			free(grid_var);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid_var[i][j] = 0;
	}

	return (grid_var);
}	
