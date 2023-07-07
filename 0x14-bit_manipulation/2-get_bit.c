#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - git
 * @n: numbers
 * @index: index of bit
 *
 * Description: git bit in index
 *
 * Return: bit in index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	char *b[100];
	int i = 0;

	while (n)
	{
		if (n % 2 == 0)
		{
			b[i] = '0';
		}
		else
			b[i] = '1';
		i++;
		n = n / 2;
	}
	if (b[index] == '1')
		return (1);
	else
		return (0);
}
