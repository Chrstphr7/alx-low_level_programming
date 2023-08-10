#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	{
	int **grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		grid[x] = (int *) malloc(width * sizeof(int));
		if (grid[x] == NULL)
			return (NULL);
		{
			for (; x >= 0; x++)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}

	return (grid);
}
