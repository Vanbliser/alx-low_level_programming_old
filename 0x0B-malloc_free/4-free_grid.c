#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 * @grid: the 2 dimentsional grid
 * @height: the height of the grid
 */
void free_grid(int **grid, int __attribute__ ((unused)) height)
{
	if (grid == NULL)
	{
		return;
	}
	free(*(grid + 0));
	free(grid);
}
