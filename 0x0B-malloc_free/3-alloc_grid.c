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
	int *pt1;
	int *pt2;
	int *pt3;

	if (width <= 0 || height <= 0)
		return (NULL);
	pt1 = malloc(sizeof(int) * width * height);
	pt2 = malloc(sizeof(int *) * height);
	pt3 = malloc(sizeof(int) * width);
	if (pt1 == NULL || pt2 == NULL || pt3 == NULL)
	{
		free(pt1);
		free(pt2);
		free(pt3);
		return (NULL);
	}
	else
	{
		free(pt1);
		free(pt2);
		free(pt3);
	}

	ptr = malloc(sizeof(int *) * height);
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
