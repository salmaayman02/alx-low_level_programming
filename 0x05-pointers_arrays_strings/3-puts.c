#include "main.h"
#include <stdio.h>

/**
 * _puts - print string
 * @str: string
 *
 * Descreption: print string
 *
 * Return: no return value
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		*str++;
	}
}
