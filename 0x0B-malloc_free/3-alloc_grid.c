#include <stdlib.h>

/**
 * alloc_grid - concat
 * @width: coul
 * @height: row
 *
 * Description: make grid
 *
 * Return: pointer
*/

int **alloc_grid(int width, int height)
{
	int **a, i, j;

	a = malloc(sizeof(*a) * height);

	if (width < 1 || height < 1 || a == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = (int *) malloc(sizeof(int) * width);
		if (a[i] == 0)
		{
			while (i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
