#include "main.h"
#include <stdio.h>

/**
 * _strncat - appends
 * @dest: pointer to string
 * @src: pointer to string
 * @n: number of bit append
 *
 * Descreption: appends string in another
 *
 * Return: return string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j, k = 0;

	while (dest[i] != '\0')
		i++;

	while (src[k] != '\0')
		k++;

	if (n <= k)
	{

		for (j = 0; j < n; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}

	else
	{
		for (j = 0; j < k; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}

	return (dest);
}
