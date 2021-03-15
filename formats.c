#include "holberton.h"

/**
 * f_char - The "%c" format specifier.
 * @arg_l: The argument list to be operated.
 * @format_i: The address of the current position of the
 *             char *format variable.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void f_char(va_list arg_l,
	    unsigned int *format_i, unsigned int *buffer_i,
	    char *buffer)
{
	buffer[(*buffer_i++)] = (char) va_arg(arg_l, int);
	*format_i += 2;
}

/**
 * f_str - The "%s" format specifier.
 * @arg_l: The argument list to be operated.
 * @format_i: The address of the current position of the
 *             char *format variable.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void f_str(va_list arg_l,
	   unsigned int *format_i, unsigned int *buffer_i,
	   char *buffer)
{
	char *str;

	str = va_arg(arg_l, char *);
	if (str == NULL)
		str = "(null)";
	str_concat(str, buffer, buffer_i);
	*format_i += 2;
}

/**
 * f_perc - Prints the '%' character.
 * @arg_l: The argument list to be operated.
 * @format_i: The address of the current position of the
 *             char *format variable.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void f_perc(va_list arg_l,
	    unsigned int *format_i, unsigned int *buffer_i,
	    char *buffer)
{
	arg_l = arg_l;
	buffer[(*buffer_i)++] = '%';
	*format_i += 2;
}

/**
 * f_int - The "%d" and "%i" format specifier.
 * @arg_l: The argument list to be operated.
 * @format_i: The address of the current position of the
 *             char *format variable.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void f_int(va_list arg_l,
	   unsigned int *format_i, unsigned int *buffer_i,
	   char *buffer)
{
	char *integer;

	integer = _itoa(va_arg(arg_l, int), 10);
	str_concat(integer, buffer, buffer_i);
	*format_i += 2;
}
