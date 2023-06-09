#include "main.h"
#include <stdio.h>

/**
 * _strlen - string lenghth
 * @s: string
 *
 * Descreption: string lenghth
 *
 * Return: integar value
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
