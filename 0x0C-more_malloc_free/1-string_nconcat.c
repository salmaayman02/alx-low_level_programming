#include <stdlib.h>

/**
 * string_nconcat - concat
 * @s1: 1st string
 * @s2: 2nd string
 * @n: size of bit in s2
 *
 * Description: concat
 *
 * Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1 = 0, len2 = 0, size, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	size = n + len1;

	p = malloc(size + 1);

	if (p == 0)
		return (NULL);

	else
	{
		for (i = 0; i < len1; i++)
			p[i] = s1[i];
		for (j = 0; j < n; j++)
		{
			p[i] = s2[j];
			i++;
		}
		s[i] = '\0';
		return (p);
	}

}
