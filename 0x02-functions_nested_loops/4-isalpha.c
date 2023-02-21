#include "main.h"

/**
 * _isalpha - Checks
 * Description: 'Checks if character is uppercase'
 * @c: character to evaluate
 * Return: 1 if success, 0 if not
 */
int _isalpha(int c)
{
	int i;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
