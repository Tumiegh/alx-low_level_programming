#include<stdio.h>
/**
 * main - Prints alphabets
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{ putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}
