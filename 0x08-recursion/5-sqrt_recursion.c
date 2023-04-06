#include"main.h"

int squre(int n, int x);
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
	int i = squre(n, 1);

	return (i);
}


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
	else if (x * x == n)
		return (x);
	else if (x * x < n)
		return (squre(n, x + 1));
	else if (n == 0)
		return (0);
}
