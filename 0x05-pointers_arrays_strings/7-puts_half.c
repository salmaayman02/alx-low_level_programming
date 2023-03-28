#include "main.h"
#include <stdio.h>

/**
 * puts_half - print string
 * @str: string
 *
 * Descreption: print 2nd half of string
 *
 * Return: no return value
*/




void puts_half(char *str)
{
	int i = 0, j, n;

	while (str[i] != '\0')
	{
		i++;
	}
	n = (i - 1) / 2;
	for (j = (n + 1); j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
