#include "main.h"

/**
 * rev_string - Checks
 * @s: character to evaluate
 * Return: void
 */
void rev_string(char *s)
{
	char str = ' ';
	int len = 0;
	int i = 0;
	char *b = s;

	while (str != '\0')
	{
		str = s[len];
		if (str != '\0')
		{
			len++;
		}
	}
	for (i = 0; i < len - 1; i++)
	{
		*(s + i) = b[len - 1 - i];
	}
}
