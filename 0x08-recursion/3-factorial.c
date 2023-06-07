#include"main.h"

/**
 * factorial - number factorial
 * @n: integer number
 *
 * Description: return fsctorisl
 *
 * Return: return integer value
*/


int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
