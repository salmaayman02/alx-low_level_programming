#include <stdlib.h>

/**
 * free_grid - free
 * @grid: 2D array
 * @height: row
 *
 * Description: free grid
 *
 * Return: no return value
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
