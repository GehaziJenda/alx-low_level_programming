#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Showing sizes of objects'
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int integer;
	char character;
	long long int big_integer;
	float floating_integer;
	long int long_integer;

	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long_integer));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(big_integer));
	printf("Size of a float: %lu byte(s)\n", sizeof(floating_integer));
	return (0);
}
