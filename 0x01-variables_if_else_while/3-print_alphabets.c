#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the alphabet'
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;
	char letters[52] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
		 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D',
		 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
		 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		 'Y', 'Z'
	};

	for (i = 0; i < 52; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
