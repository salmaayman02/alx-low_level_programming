#include <stdio.h>

/**
 * main - Entry point
 * @argc: size of argv
 * @argv: pointer of string
 *
 * Description: print file name
 *
 * Return: integr value
*/


int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d/n", argc - 1);

	return (0);
}

