#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap
 * @a: pointer to integer
 * @b: pointer to integr
 *
 * Descreption: swap two integer
 *
 * Return: no return value
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
