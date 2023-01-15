#include "main.h"
/**
 * _pow_recursion - Entry point
 * @x: 1st value
 * @y: 2nd value
 * Return: Always 0.
 */
int _pow_recursion(int x, int y);
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
