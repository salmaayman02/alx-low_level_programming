#include <stdlib.h>

/**
 * create_array - make array
 * @size: size of array
 * @c: element in array
 *
 * Description: make array
 *
 * Return: pointer to array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = malloc(size);

	if ((ptr == 0) || (size == 0))
		return (0);

	else
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;
		return (ptr);
	}
}
