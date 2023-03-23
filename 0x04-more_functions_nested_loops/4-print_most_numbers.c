#include "main.h"

/**
 * print_most_numbers - numbers
 *
 * Description : print number from 1to9
 *
 * Return: no return value
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
			_putchar('0' + i);
	}
	_putchar('\n');
}
