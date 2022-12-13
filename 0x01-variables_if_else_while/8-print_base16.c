#include <stdio.h>
/**
 * main - prints all base 16 numbers in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
