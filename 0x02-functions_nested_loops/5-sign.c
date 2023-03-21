#include "main.h"

/**
 * print_sign - sign
 * @n: int value
 * Description : prints number sign
 *
 * Return: value of r
*/

int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		r = -1;
		_putchar('-');
	}
	else
	{
		r = 0;
		_putchar('0');
	}
	return (r);
}
