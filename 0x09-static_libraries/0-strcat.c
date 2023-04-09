#include "main.h"
#include <stdio.h>

/**
 * _strcat - appends
 * @dest: pointer to string
 * @src: pointer to string
 *
 * Descreption: appends string in another
 *
 * Return: return string
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (src[j] == '\0')
	dest[++i] = '\0';

	return (dest);
}
