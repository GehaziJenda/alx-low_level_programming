#include "main.h"

void check_time(int c);

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
			check_time(hour);
			_putchar(':');
			check_time(minute);
			_putchar('\n');
		}
	}
}

/**
 * check_time - check the code
 * @c: value to be evaluated
 * Return: void.
 */
void check_time(int c)
{
	if (c < 10)
	{
		_putchar('0');
		_putchar(c + '0');
	}
	else
	{
		_putchar(c + '0');
	}
}
