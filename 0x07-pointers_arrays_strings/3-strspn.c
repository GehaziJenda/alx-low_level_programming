#include "main.h"

/**
 * _strspn - Gets length of prefix substring
 * @s: string to check
 * @accept: condition string
 * Return: unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int acceptLen = 0;
	int j = 0;
	char str = ' ';

	while (str != '\0')
	{
		str = *(accept + acceptLen);
		if (str != '\0')
		{
			acceptLen++;
		}
	}
	while (*s != ' ' && *s != '\0')
	{
		for (j = 0; j < acceptLen; j++)
		{
			if (*s == *(accept + j))
			{
				i++;
			}
		}
		s++;
	}
	return (i);
}
