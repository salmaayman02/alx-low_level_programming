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
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (argv[1] * argv[2]));
		return (0);
	}
}
