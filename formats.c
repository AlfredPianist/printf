#include "holberton.h"

/**
 * f_char - The "%c" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void f_char(va_list arg_l, unsigned int *buffer_i, unsigned int *buff_len,
	    char *buffer)
{
	check_buffer(buffer, buffer_i, buff_len, (char) va_arg(arg_l, int));
}

/**
 * f_str - The "%s" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffexr to be printed.
 */
void f_str(va_list arg_l, unsigned int *buffer_i, unsigned int *buff_len,
	   char *buffer)
{
	char *str;

	str = va_arg(arg_l, char *);
	if (str == NULL)
		str = "(null)";
	str_concat(str, buffer, buffer_i, buff_len);
}

/**
 * f_perc - Prints the '%' character.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void f_perc(va_list arg_l, unsigned int *buffer_i, unsigned int *buff_len,
	    char *buffer)
{
	arg_l = arg_l;
	check_buffer(buffer, buffer_i, buff_len, '%');
}

/**
 * f_int - The "%d" and "%i" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void f_int(va_list arg_l,
	   unsigned int *buffer_i, unsigned int *buff_len,
	   char *buffer)
{
	char *integer;

	integer = _itoa(va_arg(arg_l, int));
	str_concat(integer, buffer, buffer_i, buff_len);
}
