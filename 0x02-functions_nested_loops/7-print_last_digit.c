#include "main.h"

/**
 * print_last_digit - check the code
 * @c: value to evaluate
 * Return: Always digit.
 */
int print_last_digit(int c)
{
	int i = c % 10;
	char d = i + '0';

	_putchar(d);
	return (i);
}
