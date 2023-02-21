#include "main.h"

/**
 * print_last_digit - check the code
 * @c: value to evaluate
 * Return: Always digit.
 */
int print_last_digit(int c)
{
	int i = c % 10;

	_putchar('%d', i);
	return (i);
}
