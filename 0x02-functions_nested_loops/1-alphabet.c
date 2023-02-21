#include "main.h"


/**
 * print_alphabet - to print alphabet
 * Description: 'Prints the alphabet'
 * Return: Always void
 */
void print_alphabet(void)
{
	char letters[26] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
		 'u', 'v', 'w', 'x', 'y', 'z'
	};
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(letters[i]);
	}
	_putchar('\n');
}
