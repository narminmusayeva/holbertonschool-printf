#include <stdarg.h>
#include "main.h"

/**
 * _printf - A simplified version of the printf function
 * @format: format string with specifiers like %c, %s, and %%.
 *
 * Description: Prints formatted output to stdout. Supports %c, %s, and %%.
 *
 * Return: Number of characters printed, or -1 on error.
 */
int _printf(const char *format, ...)
{
unsigned int len = 0;
int i = 0;
va_list args;
va_start(args, format);
while (format[i])
{
if (format[i] == '%' && format[i + 1] == 'c')
{
len += _putchar(va_arg(args, int));
i += 2;
}
else if (format[i] == '%' && format[i + 1] == 's')
{
len += print_string(va_arg(args, char *));
i += 2;
}
else if (format[i] == '%' && format[i + 1] == '%')
{
len += _putchar('%');
i += 2;
}
else
{
len += _putchar(format[i]);
i++;
}
}
va_end(args);
return (len);
}

