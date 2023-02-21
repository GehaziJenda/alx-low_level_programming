#include "main.h"

/**
 * print_last_digit - check the code
 * @c: value to evaluate
 * Return: Always digit.
 */
int print_last_digit(int c)
{
	int i;
	char d;

	if (c < 0)
	{
		i = -c % 10;
	}
	else
	{
		i = c % 10;
	}
	d = i + '0';
	_putchar(d);
	return (i);
}
