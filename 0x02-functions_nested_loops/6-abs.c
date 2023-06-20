#include "main.h"

/**
 * _abs _ function that compute the absolute value
 *  of integer
 *
 * @n: takes in int type
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
