#include "main.h"
/**
 * _print_rev_recursion - Entry point
 * @s: pointer to character
 * Return: Always 0.
 */
void _print_rev_recursion(char *s);
{
	if (*s)
	{
		_puts_rev_recursion(s + 1);
		_putchar(*s);
	}
}
