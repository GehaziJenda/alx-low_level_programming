#include "main.h"

/**
 * jack_bauer - check the code
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int hour1;

	for (hour1 = 0; hour1 < 3; hour1++)
	{
		int hour2;

		for (hour2 = 0; hour2 < 10; hour2++)
		{
			int minute1;

			for (minute1 = 0; minute1 < 6; minute1++)
			{
				int minute2;

				for (minute2 = 0; minute2 < 10; minute2++)
				{
					_putchar(hour1 + '0');
					_putchar(hour2 + '0');
					_putchar(':');
					_putchar(minute1 + '0');
					_putchar(minute2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
