#include"main.h"

/**
 * compare - plaindrome
 * @s: string of charcter
 * @i: integer value
 * @n: integer value
 *
 * Description: help to check plaindrome
 *
 * Return: return integer value
*/

int compare(char *s, int i, int n)
{
	if (s[0] == '\0')
		return (1);

	else if (i == (n / 2))
		return (1);

	else if (s[i] == s[n - i - 1])
		return (compare(s, (i + 1), n));

	else
		return (0);
}

/**
 * len - string len
 * @s: string of charcter
 * @n: integer value
 *
 * Description: check plaindrome
 *
 * Return: return integer value
*/

int len(char *s, int n)
{
	if (s[n] == '\0')
		return (n);
	else
		return (len(s, (n + 1)));
}

/**
 * is_palindrome - plaindrome
 * @s: string of charcter
 *
 * Description: check plaindrome
 *
 * Return: return integer value
*/

int is_palindrome(char *s)
{
	int  n = len(s, 0);

	return (compare(s, 0, n));
}
