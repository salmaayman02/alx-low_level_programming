#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: int value
 * Description : prints number last digit
 *
 * Return: value of r
*/

int print_last_digit(int n)
{
	int r;

	r = n % 10;
	_putchar(r + '0');
	return (r);
}
