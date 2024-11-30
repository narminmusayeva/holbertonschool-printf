#include "main.h"
#include <limits.h>

/**
 * print_number - Prints an integer
 * @n: The integer to print
 *
 * Return: Number of characters printed
 */
int print_number(int n)
{
	int divisor = 1, len = 0;
	unsigned int num;

	if (n < 0) /* Handle negative numbers */
	{
		_putchar('-');
		len++;
		num = -n;
	}
	else
		num = n;

	while (num / divisor > 9) /* Find the highest divisor */
		divisor *= 10;

	while (divisor > 0)
	{
		_putchar((num / divisor) + '0');
		num %= divisor;
		divisor /= 10;
		len++;
	}

	return (len);
}
