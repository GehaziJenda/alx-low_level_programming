#include "main.h"

/**
 * more_numbers - Checks
 * Return: void
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			int first = j / 10;
			int last = j % 10;

			if (first > 0)
			{
				_putchar(first + '0');
			}
			_putchar(last + '0');
		}
		_putchar('\n');
	}
}
