#include "main.h"
#include <stdarg.h>
/**
 * _printf - A simplified version of printf
 * @format: The format string containing
 * the characters and the format specifiers
 *
 * Return: The length of the output
 */
int _printf(const char *format, ...)
{
	int i = 0;
	unsigned int len = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
<<<<<<< HEAD
		if (format[i] == '%' && format[i + 1] == 'c')
			len += _putchar(va_arg(args, int)), i += 2;

=======
		if (format[0] == '%' && !format[1])
			return (-1);
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			len += _putchar(va_arg(args, int));
			i += 2;
		}
		else  if (format[i] == '%' && format[i + 1] == 'r')
		{
			len += print_string(va_arg(args, char *));
			i += 2;
		}	
>>>>>>> a9f4493ea1f4f4d149e81c12048e3b5fa1c6331a
		else if (format[i] == '%' && format[i + 1] == 's')
			len += print_string(va_arg(args, char *)), i += 2;

		else if (format[i] == '%' && format[i + 1] == '%')
			len += _putchar('%'), i += 2;

		else if (format[i] == '%' && format[i + 1] == '\0')
			len--, i++;

		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
			len += print_number(va_arg(args, int)), i += 2;

		else
			len += _putchar(format[i]), i++;
	}
	va_end(args);
	return (len)
