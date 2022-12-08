#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	char charType;

	printf("size of a char: %zu byte(s)\n", sizeof(charType));
	printf("size of a int: %zu byte(s)\n", sizeof(intType));
	printf("size of a long: %zu byte(s)\n", sizeof(longintType));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long longType));
	printf("size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
