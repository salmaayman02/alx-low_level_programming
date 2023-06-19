#include <stdlib.h>

/**
 * array_range- concat
 * @min: start integr
 * @max: end integr
 *
 * Description: make array
 *
 * Return: pointer
*/
int *array_range(int min, int max)
{
	int size, *a, i;

	if (max < min)
		return (NULL);

	size = max - min + 1;
	a = malloc(size * sizeof(int));

	if (a == 0)
		return (NULL);

	else
	{
		for (i = 0; i < size; i++)
		{
			a[i] = min;
			min++;
		}
		return (a);
	}
}
