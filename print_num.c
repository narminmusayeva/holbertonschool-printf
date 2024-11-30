#include "main.h"
#include <limits.h>

/**
 * print_number - Prints an integer to standard output.
 * @num: The integer to print.
 *
 * Return: The length of the output (number of characters printed).
 */
int pr_num(int num)
{
	int len = 0;
	unsigned int n;
	int divisor = 1;

	if (num < 0)
	{
		_putchar('-');
		n = -num;
		len++;
	}
	else
	{
		n = num;
	}

	/* Calculate the largest divisor */
	while (n / divisor >= 10)
		divisor *= 10;

	/* Print each digit */
	while (divisor > 0)
	{
		_putchar('0' + n / divisor);
		n %= divisor;
		divisor /= 10;
		len++;
	}

	return (len);
}
