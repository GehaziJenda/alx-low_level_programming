#include "main.h"

/**
 * _strlen - Checks
 * @s: character to evaluate
 * Return: length of str
 */
int _strlen(char *s)
{
	int i = 0;
	char lastChar = 'x';

	while (lastChar != '\0')
	{
		lastChar = s[i];
		i++;
	}
	return (i - 1);
}
