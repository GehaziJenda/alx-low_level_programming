#include "main.h"

/**
 * _strncat - Checks
 * @dest: character to evaluate
 * @src: source
 * @n: where to stop
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 1;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && i <= n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (result);
}
