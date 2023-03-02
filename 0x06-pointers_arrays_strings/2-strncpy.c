#include "main.h"

/**
 * _strncpy - Copies
 * @dest: destination
 * @src: source
 * @n: where to stop
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 1;

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
