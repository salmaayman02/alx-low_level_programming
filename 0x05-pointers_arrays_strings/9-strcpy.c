#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy
 * @dest: 1st string
 * @src: 2nd string
 *
 * Descreption: copy one string in another
 *
 * Return: return pointer of string
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		dest[i] = src[i];
		i++;
	}
	while (src[i] != '\0');
	return (dest);
}
