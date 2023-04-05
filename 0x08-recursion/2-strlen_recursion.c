#include"main.h"

/**
 * _strlen_recursion - string len.
 * @s: pointer of string
 *
 * Description: return string len
 *
 * Return: return integer value
*/


int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
	{
		i = i + (_strlen_recursion(s + 1) + 1);
	}
	return (i);
}
