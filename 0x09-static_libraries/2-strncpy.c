#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy
 * @dest: pointer to string
 * @src: pointer to string
 * @n: number of bit copy
 *
 * Descreption: copy string in another
 *
 * Return: return string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
