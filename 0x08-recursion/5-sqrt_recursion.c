#include "main.h"

/**
 * sqrt_helper - Recursive helper function to find the square root.
 * @n: The number to find the square root of.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 *
 * Return: The square root of n, if it exists, otherwise -1.
 */
int sqrt_helper(int n, int start, int end)
{
	if (start > end)
		return (-1);

	int mid = (start + end) / 2;

	if (mid * mid == n)
		return (mid);
	else if (mid * mid > n)
		return (sqrt_helper(n, start, mid - 1));
	else
		return (sqrt_helper(n, mid + 1, end));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n, if it exists, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 0, n));
}

