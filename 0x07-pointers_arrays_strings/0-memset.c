#include "main.h"

/*
 * _memset - Function to fill n bytes to other
 * @s: to be filled
 * @b: to fill
 * @n: where to stop
 * Return: a char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *value = s;
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return value;
}
