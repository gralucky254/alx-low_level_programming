#include  <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * char *_strdup - Entry point
 * @str: char
 * Return: 0.
 */
char *_strdup(char *str)
{
	char *ab;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	ab = malloc(sizeof(char) * (i + 1));
	if (ab == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		ab[r] = str[r];
	return (ab);
}
