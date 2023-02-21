#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet 10x
 * Description: 'Prints the alphabet 10x'
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	int i;
	char letters[26] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
		 'u', 'v', 'w', 'x', 'y', 'z'
	};

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 26; j++)
		{
			_putchar(letters[j]);
		}
		_putchar('\n');
	}
}
