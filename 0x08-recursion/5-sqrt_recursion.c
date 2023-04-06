#include"main.h"


/**
 * squre - squre
 * @n: integer number
 * @x: integer number
 *
 * Description: squre root of x
 *
 * Return: return integer value
*/

int squre(int n, int x)
{
	if (n < 0)
		return (-1);

	if ((x * x) == n)
		return (x);

	return (squre(n, (x + 1)));
}


/**
 * _sqrt_recursion - squre
 * @n: integer number
 *
 *
 * Description: squre root of x
 *
 * Return: return integer value
*/

int _sqrt_recursion(int n)
{
	return (squre(n, 1));
}
