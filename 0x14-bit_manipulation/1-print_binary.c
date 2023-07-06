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
	int i = CHAR_BIT;

	while (i--)
	{
		_putchar('0' + ((n >> i) & 1));
	}
}
