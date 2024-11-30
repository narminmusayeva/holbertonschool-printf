#include "main.h"
#include <limits.h>

/**
 * print_number - prints an integer to standard output
 * @num: the integer to print
 *
 * Return: the length of the output (number of characters printed)
 */
int print_number(int num)
{
	int len = 0;
	int numcpy;
	int divisor = 1;

	if (num == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		num = 147483648; /* Adjust for INT_MIN */
		len += 2;
	}
	else if (num < 0)
	{
		_putchar('-');
		num *= -1; /* Make number positive */
		len++;
	}

	numcpy = num;
	while (numcpy >= 10)
	{
		numcpy /= 10;
		len++; /* Count number of digits */
		divisor *= 10; /* Prepare divisor for printing the most significant digit */
	}

	while (divisor > 0)
	{
		_putchar('0' + num / divisor);
		num %= divisor;
		divisor /= 10;
		len++; /* Increase length for each printed character */
	}

	return (len);
}

