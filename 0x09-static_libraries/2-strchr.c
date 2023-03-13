#include "main.h"
#include <stddef.h>

/**
 * _strchr - Checks if char is present
 * @s: String to evaluate
 * @c: Character to check
 * Return: pointer to first occurance of c
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *value = s;

	while (*s != '\0')
	{
		if (*s == c)
		{
			while (*s != '\0')
			{
				*(s + i) = *s;
				s++;
				i++;
			}
			break;
		}
		else
		{
			s = NULL;
		}
		s++;
	}
	return (value);
}
