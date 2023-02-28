#include "main.h"

/**
 * puts_half - Checks
 * @str: character to evaluate
 * Return: void
 */
void puts_half(char *str)
{
	char s = ' ';
	int i = 0;
	int j = 0;

	while (s != '\0')
	{
		s = str[i];
		if (s != '\0')
		{
			i++;
		}
	}
	
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (i - 1) / 2; j < i; j++)
		{
			_putchar(str[j + 1]);
		}
	}
	_putchar('\n');
}
