#include "main.h"

/**
  * allow_grid - a function that returns a pointer to a 2D
  * @width: width of the 2D array
  * @height: height of the 2D array
  * Return: returns a pointer
  */

int **allow_grid(int width, int height)
{
	int a, size;
	int **p;

	size = width * height;
	p = (int *) malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		p[a]  = 0;
	return (p);
}
