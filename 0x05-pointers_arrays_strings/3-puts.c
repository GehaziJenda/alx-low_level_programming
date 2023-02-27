#include "main.h"

/**
 * _puts - Checks
 * @str: character to evaluate
 * Return: void
 */
void _puts(char *str)
{
	char lastStr = 'x';
	int i = 0;

	while (lastStr != '\0')
	{
		_putchar(str[i]);
		lastStr = str[i];
		i++;
	}
	_putchar('\n');
}
