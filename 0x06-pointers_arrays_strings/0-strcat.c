#include "main.h"

/**
 * _strcat - Checks
 * @dest: character to evaluate
 * @src: source
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}

