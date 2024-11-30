#include "main.h"
#include <unistd.h>
/**
 * print_string - Prints a string to stdout.
 * @str: The string to be printed.
 * Description: This function prints the string `str` to the standard output.
 * If the string is NULL, it prints "(null)" instead.
 *
 * Return: The number of characters printed.
 */
int print_string(char *str)
{
int count = 0;
if (str == NULL)
str = "(null)";
while (*str)
{
count += write(1, str, 1);
str++;
}
return (count);
}
