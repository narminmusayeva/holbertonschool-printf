#include "main.h"
#include <limits.h>

/**
 * print_number - Prints an integer to standard output.
 * @num: The integer to print.
 *
 * Return: The length of the output (number of characters printed).
 */
int print_number(int num)
{
	int len = 0;
	unsigned int n;

	if (num < 0) /* Handle negative numbers */
	{
		_putchar('-');
		n = -num; /* Convert num to positive for easier handling */
		len++;
	}
	else
	{
		n = num;
	}
	/* Handle the special case for INT_MIN (because of overflow) */
	if (num == INT_MIN)
	{
		n = -(unsigned int)INT_MIN;
	}
	/* If the number is 0, print 0 */
	if (n == 0)
	{
		_putchar('0');
		return (len + 1);
	}
	/* Recursively print digits from most significant to least significant */
	int divisor = 1000000000; /* Largest divisor (10^9) for 32-bit integer */

	while (divisor > 0)
	{
		if (n / divisor > 0 || len > 0) /* Only print leadingdigitswhen necessary */
		{
			_putchar('0' + n / divisor);
			len++;
		}
	n %= divisor;
	divisor /= 10;
	}
	return (len); /* Return the total length of printed digits */
}
