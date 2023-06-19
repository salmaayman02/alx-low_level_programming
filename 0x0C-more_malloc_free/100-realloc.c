#include <stdlib.h>

/**
 * *_realloc - concat
 * @ptr: pointer
 * @old_size: integr
 * @new_size: integr
 *
 * Description: reallocate
 *
 * Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == 0)
			return (NULL);
		return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
		return (ptr);

	else
	{
		p = malloc(new_size);
		if (p == 0)
		return (NULL);

		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)p + i) = *((char *)ptr + i);
		free(ptr);
	}


	return (p);
}
