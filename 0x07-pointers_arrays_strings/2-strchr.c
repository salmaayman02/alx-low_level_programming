/**
 * _strchr - copy string in an other
 * @s: pointer to string
 * @c: char
 *
 * Descreption: copy string in an other
 *
 * Return: return string
*/

char *_strchr(char *s, char c)
{
	int i = 0;
	char *p = NULL;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return ("");
}
