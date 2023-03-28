#include "main.h"
#include <stdio.h>

/**
 * print_array - print array
 * @a: array
 * @n: size of array
 * Descreption: print elements of array
 *
 * Return: no return value
*/


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
