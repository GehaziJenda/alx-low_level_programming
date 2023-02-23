#include "main.h"

/**
 * print_diagonal - Checks
 * @n: number of times to print diagonal
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			int j = i - 1;

			if (j > 0)
			{
				int k;

				for (k = 1; k <= j; k++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
