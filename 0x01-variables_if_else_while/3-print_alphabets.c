#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints "line "
 *
 * Description : program prints with putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a', x = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
