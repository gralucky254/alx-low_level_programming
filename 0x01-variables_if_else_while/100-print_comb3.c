#include <stdio.h>
/**
 * main - prints all possible different combinationof two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, n;

	for (i = 0; i < 9; i++)
	{
		for (n = i + 1; n < 9; n++)
		{
			putchar((i % 10) + '0');
			putchar((n % 10) + '0');
			if (i == 8 && n == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

