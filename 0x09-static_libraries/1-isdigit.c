#include "main.h"

/**
 * _isdigit - Checks
 * Description: 'Checks if character is digit'
 * @c: character to evaluate
 * Return: 1 if success, 0 if not
 */
int _isdigit(int c)
{
	int i;

	if (c >= 48 && c <= 57)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
