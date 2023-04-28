#include <stdio.h>

/**
 * first - print statment
 *
 * Return: void
*/

void __attribute__ ((constructor)) first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
