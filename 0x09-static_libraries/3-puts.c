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
		lastStr = str[i];
		if (lastStr != '\0')
		{
			_putchar(lastStr);
		}
		i++;
	}
	_putchar('\n');
}
