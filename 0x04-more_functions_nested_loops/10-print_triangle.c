#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print_triangle
 * @size: number of #
 * Description : print_triangle
 *
 * Return: no return value
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
