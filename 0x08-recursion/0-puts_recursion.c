#include"main.h"

/**
 * _puts_recursion - print string
 * @s: pointer of string
 *
 * Description: print string
 *
 * Return: no return value
*/

void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	i++;
	if (s[i] != '\0')
		_puts_recursion(s[i]);
	else
		_putchar('\n');
}
