/**
 * _strstr - copy string in an other
 * @haystack: pointer to string
 * @needle: pointer to string
 *
 * Descreption: copy string in an other
 *
 * Return: return string
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return ('\0');
}
