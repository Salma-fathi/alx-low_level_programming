#include "main.h"

/**
 * _pow_recursion - returns the value of n raised to the power of m
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int n, int m)
{
	if (m < 0)
		return (-1);
	if (m == 0)
		return (1);
	return (n * _pow_recursion(n, m - 1));
}
