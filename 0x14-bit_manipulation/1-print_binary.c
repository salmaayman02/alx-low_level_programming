#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * print_binary - convert
 * @n: deimal number
 *
 * Description: convert binary from decimal
*/

void print_binary(unsigned long int n)
{
	int bit = CHAR_BIT;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
