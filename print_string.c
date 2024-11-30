#include "main.h"

/**
 * print_string - Prints a string to stdout.
 * @str: The string to be printed.
 *
 * Return: The number of characters printed.
 */
int print_string(char *str)
{
    int count = 0;

    if (str == NULL) // Handle NULL string
        str = "(null)";

    while (*str)
    {
        count += write(1, str, 1); // Write each character
        str++;
    }

    return (count);
}
