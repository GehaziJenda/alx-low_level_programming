#include "main.h"

/**
 * print_triangle - Checks
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			int k = size - i;
			int x = size - k;
			int y;

			if (k > 0)
			{
				int j;

				for (j = 0; j < k; j++)
				{
					_putchar(' ');
				}
			}
			for (y = 0; y < x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
