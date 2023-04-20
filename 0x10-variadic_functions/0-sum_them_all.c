#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all
 * @n: number of args
 *
 * Description: sum all of args
 *
 * Return: sum of args
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	/*int sum = 0;*/
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);

}
