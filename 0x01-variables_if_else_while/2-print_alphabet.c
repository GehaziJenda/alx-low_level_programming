#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the alphabet'
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;
	char letters[26] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
		 'u', 'v', 'w', 'x', 'y', 'z'
	};

	for (i = 0; i < 26; i++)
	{
		putchar(letters[i]);
	}
	return (0);
}
