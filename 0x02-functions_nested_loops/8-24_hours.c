#include "main.h"

/**
 * jack_bauer - check the code
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int hour;

	for (hour = 0; hour < 24; hour++)
	{
		int minute;

		for (minute = 0; minute < 60; minute++)
		{
			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour + '0');
				if (minute < 10)
				{
					_putchar('0');
					_putchar(minute + '0');
				}
				else
				{
					_putchar(minute + '0');
				}
			}
			else
			{
				_putchar(hour + '0');
				if (minute < 10)
				{
					_putchar('0');
					_putchar(minute + '0)
				}
				else
				{
					_putchar(minute + '0');
				}

			}
			_putchar('\n');
		}
	}
}
