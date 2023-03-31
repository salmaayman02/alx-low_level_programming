#include "main.h"
#include <stdio.h>

/**
 * lowercase - lowercase
 * @x: char
 *
 * Descreption: if char is lowercase
 *
 * Return: return integre value
*/

int lowercase(char x)
{
	if (x >= 97 && x <= 122)
		return (1);
	else
		return (0);
}


/**
 * del - check char
 * @x: char
 *
 * Descreption: check char
 *
 * Return: return integre value
*/

int del(char x)
{
	char a[] = "\t\n,.!?\"{} ()";

	for (int i = 0; i < 13; i++)
	{
		if (x == a[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - uppercase
 * @s: string
 *
 * Descreption: all string in uppercase
 *
 * Return: return string
*/

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((i == 0) && (lowercase(s[i]) == 1))
		{	
			s[i] = s[i] - 32;
		}
		else if ((del(s[i]) == 1) && (lowercase(s[i + 1]) == 1))
		{
			s[i + 1] = s[i + 1] - 32;
		}

		i++;
	}
	return (s);
}
