#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int n, m = 0;

	if (str == NULL)
		return (NULL);
	n = 0;
	while (str[n] != '\0')
		n++;

	aaa = malloc(sizeof(char) * (n + 1));

	if (aaa == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		aaa[m] = str[m];

	return (aaa);
}
