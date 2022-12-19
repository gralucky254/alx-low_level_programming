#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, n, k;

	k = 0;

	for (i = 0; str[i] != '\0'; i++)
		k++;
	n = (k / 2);
	if ((k % 2) == 1)
		n = ((n + 1) / 2);
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
