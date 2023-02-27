#include "main.h"

/**
 * swap_int - Checks
 * @a: character to evaluate
 * @b: Character to evaluate
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;
	int j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
