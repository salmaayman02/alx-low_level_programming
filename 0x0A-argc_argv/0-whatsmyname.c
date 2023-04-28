#include <stdio.h>
#include"main.h"
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
	(void) argc;

	printf("%s/n", argv[0]);

	return (0);
}

