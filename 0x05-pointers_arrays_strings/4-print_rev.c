#include "main.h"
#include <stdio.h>

/**
 * print_rev - reverse
 * @s: string
 *
 * Descreption: print reverse string
 *
 * Return: no return value
*/

void print_rev(char *s)
{
	int i = 0, j;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	if (*s == '\0')
	{
		for (j = 0; j < i; j++)
		{
			s--;
			_putchar(*s);
		}
	}
	_putchar('\n');
}
