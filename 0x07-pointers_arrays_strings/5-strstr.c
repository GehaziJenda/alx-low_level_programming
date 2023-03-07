#include "main.h"
#include <stddef.h>

/**
 * _strstr - Finds first occurance of needle in haystack
 * @haystack: string to be searched
 * @needle: string to be found
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, check = 0, index;
	char *p = NULL;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = i, k = 0; needle[k] != '\0' && haystack[j] == needle[k]; j++, k++)
		if (needle[k] == '\0')
		{
			check = 1;
			index = i;
			break;
		}
	}
	if (check == 1)
	{
		return (haystack + index);
	}
	else
	{
		return (p);
	}
}
