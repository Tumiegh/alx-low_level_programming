#include "main.h"

/**
 * binary_to_unit - converts binary number to an unsigned int.
 *@b - string of binary numbers of zero and one
 * Return - converted number or zero if binary numbers are more.
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int bi_val = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')

			return (0);

		bi_val = 2 * bi_val + (b[x] - '0');

	}

	return (bi_val);
}
