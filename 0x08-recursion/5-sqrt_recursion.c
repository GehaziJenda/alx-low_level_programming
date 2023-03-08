#include "main.h"

/**
 * sqrt_recursive - checks square root
 * @n: the number
 * @start: where to start
 * @end: where to end
 * Return: int
 */
int sqrt_recursive(int n, int start, int end)
{
	int mid = (start + end) / 2;
	int sqr = mid * mid;

	if (start > end)
	{
		return (-1);
	}
	if (sqr == n)
	{
		return (mid);
	}
	else if (sqr < n)
	{
		return (sqrt_recursive(n, mid + 1, end));
	}
	else
	{
		return (sqrt_recursive(n, start, mid - 1));
	}
}

/**
 * _sqrt_recursion - returns natural square root
 * @n: number to evaluate
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (sqrt_recursive(n, 0, n));
	}
}
