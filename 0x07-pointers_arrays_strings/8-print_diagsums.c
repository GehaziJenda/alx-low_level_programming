#include "main.h"
#include<stdio.h>

/**
 * print_diagsums - Prints diagonals of square matrix
 * @a: values
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		while (j < size)
		{
			if (i == j)
			{
				sum1 += a[i][j];
			}
			if (j + i == size - 1)
			{
				sum2 += a[i][j];
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
