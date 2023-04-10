#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: size of argv
 * @argv: pointer of string
 *
 * Description: print file name
 *
 * Return: integr value
*/
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
