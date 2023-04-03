/**
 * _memcpy - copy string in an other
 * @dest: pointer to string
 * @src: poiter string
 * @n: size byte
 *
 * Descreption: copy string in an other
 *
 * Return: return string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
