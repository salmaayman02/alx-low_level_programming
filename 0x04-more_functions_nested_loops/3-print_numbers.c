#include "main.h"

/**
 * print_numbers - numbers
 *
 * Description : print number from 1to9
 *
 * Return: no return value
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
