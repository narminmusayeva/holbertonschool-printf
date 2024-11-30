#include "main.h"
#include <stdarg.h>
int _printf(const char *format, ...)
{
unsigned int len = 0;
int i = 0;
va_list args;
va_start (args, format);
while (format[i])
{

if (format[i] == '%' && format[i + 1] == 'c')
len += _putchar(va_arg(args, int)), i += 2;

else if (format[i] == '%' && format[i+1] == 's')

len += print_string(va_arg(args, char *)), i += 2;

else if (format[i] == '%' && format[i + 1] == '%')
len += _putchar('%'), i +=2;

else
{
len += _putchar(format[i]);
i++;
}
}
va_end(args);
return len;

}