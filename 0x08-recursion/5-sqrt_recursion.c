#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input number to get its square root
 *
 * Return: int value of the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (_fact(n, 1));
}
