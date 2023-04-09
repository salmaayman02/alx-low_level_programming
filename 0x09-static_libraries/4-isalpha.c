
#include "main.h"

/**
 * _isalpha - alphabet
 * @c: char value
 * Description : check if alphabet
 *
 * Return: value of r
*/

int _isalpha(int c)
{
	int r;

	if (c >= 97 && c <= 122)
		r = 1;
	else if (c >= 65 && c <= 90)
		r = 1;
	else
		r = 0;
	return (r);
}
