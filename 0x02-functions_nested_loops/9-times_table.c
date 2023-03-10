#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always void.
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			int c;

			c = i * j;
			if (c < 10)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(c + '0');
			}
			else
			{
				int first;
				int last;

				first = c / 10;
				last = c % 10;
				_putchar(',');
				_putchar(' ');
				_putchar(first + '0');
				_putchar(last + '0');
			}
		}
		_putchar('\n');
	}
}
