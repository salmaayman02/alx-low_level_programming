#include <stdlib.h>

/**
 * _memset - concat
 * @x: string
 * @y: char
 * @n: size
 *
 * Description: help calloc
 *
 * Return: pointer
*/
char *_memset(char *x, char y, unsigned int n)
{
	char *ptr = x;

	while (n--)
		*x++ = y;

	return (ptr);
}
/**
 * _calloc - concat
 * @nmemb: number of member
 * @size: size
 *
 * Description: calloc
 *
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb * size);

	if (x == 0)
		return (NULL);

	else
	{
		_memset(x, 0, nmemb * size);
		return (x);
	}
}
