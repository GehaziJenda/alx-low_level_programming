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
					result = i - j;
				}
				else
				{
					result = i - j;
				}
				break;
			}
		}
	}
	if (i == j)
	{
		result = 0;
	}
	return (i);
}
