#include"main.h"
/**
 * print_last_digit - Entry point
 * @n: checks last digit of a number
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar((n % 10) + '0');
	}
	return (n);
}

