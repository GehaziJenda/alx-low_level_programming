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
	char destLast = ' ';
	int destLen = 0;
	int j = 1;

	while (srcLast != '\0')
	{
		srcLast = src[i];
		if (srcLast != '\0')
		{
			i++;
		}
	}
	while (destLast != '\0')
	{
		destLast = dest[destLen];
		destLen++;
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
		while (j < destLast - 1)
		{
			*dest = '\0';
			dest++;
			j++;
		}
	}
	return (result);
}
