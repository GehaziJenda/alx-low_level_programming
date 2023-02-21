#include "main.h"

/**
 * _abs - check the code
 * @c: variable to be checked
 * Return: Always positive integer
 */
int _abs(int c)
{
	int i = c;

	if (c < 0)
	{
		i = -c;
	}
	return (i);
}
