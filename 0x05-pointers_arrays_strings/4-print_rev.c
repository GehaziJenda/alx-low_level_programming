#include "main.h"

/**
 * print_rev - Checks
 * @s: character to evaluate
 * Return: void
 */
void print_rev(char *s)
{
	char str = ' ';
	int i = 0;
	int len = 0;

	while (str != '\0')
	{
		str = s[len];
		if (str != '\0')
		{
			len++;
		}
	}

	for (i = len - 1; i >= 0; i--)
	{
		str = s[i];
		_putchar(str);
	}
	_putchar('\n');
}
