#include "main.h"

/**
 * _memcpy - Copies in memory
 * @dest: to be copied into
 * @src: to copy
 * @n: where to stop
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *value = dest;
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (value);
}
