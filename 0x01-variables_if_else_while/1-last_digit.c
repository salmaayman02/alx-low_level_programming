#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints "line "
 *
 * Description : program prints with puts function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, digit;
	digit = n % 10;
	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is 0", n, digit);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0", n, digit);
	return (0);
}
