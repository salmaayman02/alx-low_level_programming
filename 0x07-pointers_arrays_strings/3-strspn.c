/**
 * _strspn - copy string in an other
 * @s: pointer to string
 * @accept: pointer to string
 *
 * Descreption: copy string in an other
 *
 * Return: return int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != s[i]; n++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
