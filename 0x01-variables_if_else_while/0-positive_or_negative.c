#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints "line "
 *
 * Description : program prints if number
 * +ve or -ve
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%i is negative", n);
	else if (n > 0)
		printf("%i is positive", n);
	else
		printf("%i is zero", n);

	return (0);
}
