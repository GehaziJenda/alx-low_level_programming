#include "main.h"

/**
 * _strlen_recursion - returns len of string
 * @s: string to measure
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
