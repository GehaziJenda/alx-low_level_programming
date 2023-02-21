#include "main.h"

/**
 * main - Entry point
 * Description: 'Main function'
 * Return: Always returns 0 (Success)
 */
int main(void)
{
	char string[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');

	return (0);
}
