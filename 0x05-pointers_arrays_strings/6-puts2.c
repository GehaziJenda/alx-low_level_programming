#include "main.h"

/**
 * puts2 - Checks
 * @str: character to evaluate
 * Return: void
 */
void puts2(char *str)
{
	char s = ' ';
	int i = 0;

	while (s != '\0')
	{
		s = str[i];
		if (s != '\0')
		{
			if (i == 0 || i % 2 == 0)
			{
				_putchar(s);
			}
			i++;
		}
	}
	_putchar('\n');
}
