#include "holberton.h"

/**
 * f_int - The "%d" and "%i" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void m_ld(va_list arg_l,
	  unsigned int *buffer_i, unsigned int *buff_len,
	  char *buffer)
{
	char *integer;

	integer = _itoa(va_arg(arg_l, long int));
	str_concat(integer, buffer, buffer_i, buff_len);
	free(integer);
}

/**
 * f_uint - The "%u" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void m_lu(va_list arg_l,
	  unsigned int *buffer_i, unsigned int *buff_len,
	  char *buffer)
{
	char *u_integer;

	u_integer = _uitoa_b_o_h(va_arg(arg_l, unsigned long int), 10, 0);
	str_concat(u_integer, buffer, buffer_i, buff_len);
	free(u_integer);
}
