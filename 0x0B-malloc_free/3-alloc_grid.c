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
	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		*(ptr + i) = malloc(sizeof(int) * width);
		if (*(ptr + i) == NULL)
			return (NULL);
		for (j = 0; j < width; ++j)
		{
			*(*(ptr + i) + j) = 0;
		}
	}
	return (ptr);
}
