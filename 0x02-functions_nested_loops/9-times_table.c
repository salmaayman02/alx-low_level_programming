#include <stdio.h>
#include "main.h"

/**
 * times_table - print times table
 *
 * Description : prints times table
 *
 * Return: no return value
*/

void times_table(void);
{
	int a, b, m;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			m = a * b;
			printf("%i", m);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
