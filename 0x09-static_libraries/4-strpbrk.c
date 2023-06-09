/**
 * _strpbrk - copy string in an other
 * @s: pointer to string
 * @accept: pointer to string
 *
 * Descreption: copy string in an other
 *
 * Return: return string
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	char *p;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
