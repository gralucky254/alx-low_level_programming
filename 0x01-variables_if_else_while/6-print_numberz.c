#include <stdio.h>
/**
 * main - prints all single digits of base 10 starting from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 1; n < 10; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
