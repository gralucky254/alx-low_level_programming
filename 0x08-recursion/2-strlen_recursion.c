#include "main.h"
/**
 * _strlen_recursion -Entry point
 * @s: string to be measured
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
