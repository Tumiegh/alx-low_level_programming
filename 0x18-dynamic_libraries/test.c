#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * printf - Interger
 * Return: Exit
 */

int printf(const char *format, ...)
{
	write(1, "9 10 24 75 +9\n",17);
	write(1, "Congratulation, you won the Jackpot\n", 38);
	exit(EXIT_SUCCESS);
}
