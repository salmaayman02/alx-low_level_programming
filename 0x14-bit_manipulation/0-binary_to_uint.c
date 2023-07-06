#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - convert
 * @b: binary numbers
 *
 * Description: convert binary to decimal
 *
 * Return: decimal number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, i, l = 0, y, z, j;

	while (b[l] != '\0')
		l++;
	for (i = 0; i < l; i++)
	{
		if (b[i] == '1')
		{
			y = l - i - 1;
			j = 1;
			for (z = 0; z < y; z++)
			{
				j = j * 2;
			}
			x = x + j;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	}
	return (x);
}
