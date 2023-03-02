#include "main.h"

/**
 * _strcmp - Checks
 * @s1: character to evaluate
 * @s2: source
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;
	int i = 0;
	int j = 0;
	int s1Len = 0;
	int s2Len = 0;
	char s1Str = ' ';
	char s2Str = ' ';

	while (s1Str != '\0')
	{
		s1Str = s1[s1Len];
		if (s1Str != '\0')
		{
			s1Len++;
		}
	}
	while (s2Str != '\0')
	{
		s2Str = s2[s2Len];
		if (s2Str != '\0')
		{
			s2Len++;
		}
	}
	while (*s1 != '\0')
	{
		i += *s1;
		s1++;
		while (*s2 != '\0')
		{
			j += *s2;
			s2++;
			if (i != j)
			{
				if (i > j)
				{
					result = i - j - s2Len;
				}
				else
				{
					result = i - j + s1Len;
				}
				break;
			}
		}
	}
	if (i == j)
	{
		result = 0;
	}
	return (result);
}
