#include "main.h"

/**
 * print_sign - Checks
 * Description: 'Checks if number is positive or negative'
 * @n: character to evaluate
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
	}
	else
	{
		if (n == 0)
		{
			i = 0;
		}
		else
		{
			i = -1;
		}
	}
	return (i);
}
