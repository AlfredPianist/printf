#include "holberton.h"

/**
 * m_ld - The "l" modifier for the "d" and "i" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *            buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void m_ld(va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer)
{
	char *integer;

	integer = _itoa(va_arg(arg_l, long int));
	str_concat(integer, buffer, buffer_i, buff_len);
	free(integer);
}

/**
 * m_lu - The "l" modifier for the "u" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void m_lu(va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer)
{
	char *u_integer;

	u_integer = _uitoa_b_o_h(va_arg(arg_l, unsigned long int), 10, 0);
	str_concat(u_integer, buffer, buffer_i, buff_len);
	free(u_integer);
}

/**
 * m_lo - The "l" modifier for the "o" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void m_lo(va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer)
{
	char *octal;

	octal = _uitoa_b_o_h(va_arg(arg_l, unsigned long int), 8, 0);
	str_concat(octal, buffer, buffer_i, buff_len);
	free(octal);
}

/**
 * m_lx - The "l" modifier for the "x" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void m_lx(va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer)
{
	char *hex;

	hex = _uitoa_b_o_h(va_arg(arg_l, unsigned long int), 16, 0);
	str_concat(hex, buffer, buffer_i, buff_len);
	free(hex);
}

/**
 * m_lX - The "l" modifier for the "X" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void m_lX(va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer)
{
	char *hex;

	hex = _uitoa_b_o_h(va_arg(arg_l, unsigned long int), 16, 1);
	str_concat(hex, buffer, buffer_i, buff_len);
	free(hex);
}
