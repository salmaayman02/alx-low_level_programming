
/**
 * _memset - set char b in string
 * @s: pointer to integer
 * @b: char
 * @n: size byte
 *
 * Descreption: set char b in string
 *
 * Return: return string
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (ptr);
}
