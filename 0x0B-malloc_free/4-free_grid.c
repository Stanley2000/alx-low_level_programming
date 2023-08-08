#include "main.h"
/**
  * free_grid - a function that free the allocated mem
  * @grid: pointer to the allocated mem
  * @height: the row of the array
  */

void free_grid(int **grid, int height)
{
	int i;

	if (height == 0 || grid == NULL)
		return (0);
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
