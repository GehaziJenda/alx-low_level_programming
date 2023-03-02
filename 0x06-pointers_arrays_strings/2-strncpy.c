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
	char srcLast = ' ';
	int j = 1;

	while (srcLast != '\0')
	{
		srcLast = src[i];
		if (srcLast != '\0')
		{
			i++;
		}
	}
	if (i > n)
	{
		while (j <= n)
		{
			*dest = *src;
			j++;
			dest++;
			src++;
		}
		while (*dest != '\0')
		{
			*dest = *dest;
			dest++;
		}
	}
	else
	{
		while (j <= n)
		{
			*dest = *src;
			j++;
			dest++;
			src++;
		}
	}
	*dest = '\0';
	return (result);
}
