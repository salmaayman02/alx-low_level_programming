#include <stdlib.h>

/**
 * str_concat - concat
 * @s1: string
 * @s2: string
 *
 * Description: concat strings
 *
 * Return: pointer to string
*/

char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, size, i, j;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = '\0';
		s2 = '\0';
	}
	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';


	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	size = l1 + l2;

	ptr = malloc(size + 1);

	if (ptr == 0)
		return (0);

	else
	{
		for (i = 0; i < l1; i++)
			ptr[i] = s1[i];

		for (j = 0; i < size; i++, j++)
			ptr[i] = s2[j];

		return (ptr);
	}

}
