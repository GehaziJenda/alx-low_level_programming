#include "main.h"

/**
 * _strcpy - Checks
 * @dest: character to evaluate
 * @src: source
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;
	char str = ' ';

	while (str != '\0')
	{
		str = src[len];
		if (str != '\0')
		{
			len++;
		}
	}
	for (i = 0; i <= len; i++)
	{
		if (i != len)
		{
			*(dest + i) = src[i];
		}
		else
		{
			*(dest + i) = '\0';
		}
	}
	return (dest);
}
