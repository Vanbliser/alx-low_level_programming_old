#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array of
 * integers. Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to the 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	ptr = malloc(sizeof(int *) * height);
	for (i = 0; i < height; ++i)
	{
		*(ptr + i) = malloc(sizeof(int) * width);
		for (j = 0; j < width; ++j)
		{
			*(*(ptr + i) + j) = 0;
		}
	}
	return (ptr);
}
