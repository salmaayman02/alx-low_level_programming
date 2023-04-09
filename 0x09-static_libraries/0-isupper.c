#include "main.h"

/**
 * _isupper - check uppercase
 * @c: int value
 *
 * Description : check if uppercase
 *
 * Return: rturn boolean value 1 or 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
