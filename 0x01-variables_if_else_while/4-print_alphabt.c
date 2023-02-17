#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the alphabet'
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;
	char letters[24] = {
		'a', 'b', 'c', 'd', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't',
		 'u', 'v', 'w', 'x', 'y', 'z'
	};

	for (i = 0; i < 24; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
