#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Descreption: compare between two string
 *
 * Return: return int value
*/

int _strcmp(char *s1, char *s2)
{
	int t;

	t = *s1 - *s2;
	return (t);
}
