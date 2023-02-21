#include "main.h"

/**
 * _islower - Checks
 * Description: 'Checks if character is lowercase'
 * @c: character to evaluate
 * Return: 1 if success, 0 if not
 */
int _islower(char c)
{
	int i;

	if (c >= 97 && c <= 122)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
