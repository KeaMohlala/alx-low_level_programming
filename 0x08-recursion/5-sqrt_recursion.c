#include "main.h"
int _sqrt_search(int root, int n);

/**
 * _sqrt_search - determines root of n
 * @n: integer to calcuate square root
 * @root: base integer that is incremented to find the sqaure root of n
 * Return: root value of n
 */

int _sqrt_search(int root, int n)
{
	if (root * root == n)
	{
		return (root);
	}

	else if ((root * root) > n)
	{
		return (-1);
	}

	else
	{
		return (_sqrt_search((root + 1), n));
	}
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: integer to calcuate square root
 * Return: square root of n or -1 if there is no square root or if
 * n is a negative number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	else
	return (_sqrt_search(0, n));
}

