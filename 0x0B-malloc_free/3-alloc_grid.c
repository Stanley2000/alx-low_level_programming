#include "main.h"

/**
  * allow_grid - a function that returns a pointer to a 2D
  * @width: width of the 2D array
  * @height: height of the 2D array
  * Return: returns a pointer
  */

int **allow_grid(int width, int height)
{
	int a, b;
	int **p;

	p = (int **) malloc(sizeof(int) * height);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		p[a] = (int *) malloc(sizeof(int) * width);
		if (p[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(p[b]);
			}
			free(p);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			p[a][b] = 0;
		}
	}
	return (p);

}
