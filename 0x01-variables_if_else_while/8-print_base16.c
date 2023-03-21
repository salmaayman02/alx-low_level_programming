#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints "line "
 *
 * Description : program print hexa-dicemal
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0')
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
