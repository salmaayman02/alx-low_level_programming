#include "main.h"

/**
 * _islower - lower or upper
 * @c: char value
 * Description : letter lower or upper case
 *
 * Return: value of r
*/

int _islower(int c)
{
	int r;

	if (c >= 97 && c <= 122)
		r = 1;
	else if (c >= 65 && c <= 90)
		r = 0;
	return (r);
}
