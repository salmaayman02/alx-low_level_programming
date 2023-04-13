#include <stdlib.h>

/**
 * malloc_checked - malloc
 * @b: size of variable
 *
 * Description: check malloc
 *
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);

	if (a == 0)
		exit(98);
	else
		return (a);
}
