#include <stdlib.h>

/**
 * _strdup - make array
 * @str: string
 *
 * Description: copy string
 *
 * Return: pointer to array
*/

char *_strdup(char *str)
{
	int i = 0, j;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	ptr = malloc(i * sizeof(*str) + 1);

	if (ptr == 0 || i == 0)
		return (0);

	else
	{
		for (j = 0; j < i; j++)
			ptr[j] = str[j];
		return (ptr);
	}

}
