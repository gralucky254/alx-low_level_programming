#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: int to be checked
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
