#include"main.h"

/**
 * modulus - moduls
 * @x: integer number
 * @y: integer number
 *
 * Description: help to check prime
 *
 * Return: return integer value
*/

int modulus(int x, int y)
{
	if (x == y)
		return (1);

	else if (x % y == 0)
		return (0);
	else
		return (modulus(x, (y + 1)));
}

/**
 * is_prime_number - prime number
 * @n: integer number
 *
 * Description: check if number prime
 *
 * Return: return integer value
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (modulus(n, 2));
}
