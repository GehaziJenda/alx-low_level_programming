#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the alphabet'
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;
	char letters[10] = {
		'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'
	};

	for (i = 0; i < 10; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
