#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * n - prints the binary
 */
void print_binary(unsigned long int n)
{
	int x = 0;
	unsigned long int m;

	for (x = 63; x >= 0; x--)
	{
		m = n >> x;

		if (m & 1)
		{
			_putchar('1');
			m++;
		}
		else if (m)
			_putchar('0');
	}
	if (!m)
		_putchar('0');
}
