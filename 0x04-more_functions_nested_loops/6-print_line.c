#include "main.h"
/**
 * print_line - Entry point
 * @n: integer given
 * Return: Always 0.
 */
void print_line(int n)
{
	n = '_';

	for (n = 0; n <= 10; n++)
	{
		_putchar('_');
		if (n == 0 && n < 0)
		{
			_putchar('\n');
		}
	}
}
