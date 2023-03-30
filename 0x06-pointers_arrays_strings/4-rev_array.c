#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse
 * @a: array of integr
 * @n: size of array
 *
 * Descreption: reverse array
 *
 * Return: no return value
*/


void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
