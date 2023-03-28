#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse
 * @s: string
 *
 * Descreption: reverse string
 *
 * Return: no return value
*/



void rev_string(char *s)
{
	int i = 0, j;
	char a;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	for (j = 0; j < i; j++)
	{
		s--;
	}

	for (j = 0; j < (i / 2); j++)
	{
		a = s[j];
		s[j] = s[(i - 1 - j)];
		s[(i - 1 - j)] = a;
	}
}
