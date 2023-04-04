#include<stdio.h>

/**
 * print_diagsums - print multi arrary
 * @a: multi array
 * @size: size of array
 *
 * Descreption: print multi array
 *
 * Return: no return value
*/

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		s2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
