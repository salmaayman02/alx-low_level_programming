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
	int sum = 0;
	char c;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (--argc)
		{
			for (c = argv[argc]; *c; c++)
			{
				if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[argc]);
			}
			printf("%d\n", sum);
		}

	}
	return (0);
}
