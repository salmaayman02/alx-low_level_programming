
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
	unsigned int i;

	for (i = 0; n > 0; i--, n--)
	{
		s[i] = b;
	}
	return (s);
}
