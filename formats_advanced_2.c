#include "holberton.h"

/**
 * f_bin - The "%b" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void f_bin(va_list arg_l,
	   unsigned int *buffer_i, unsigned int *buff_len,
	   char *buffer)
{
	char *binary;

	binary = _uitoa_b_o_h(va_arg(arg_l, unsigned int), 2, 0);
	str_concat(binary, buffer, buffer_i, buff_len);
}

/**
 * f_uint - The "%u" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void f_uint(va_list arg_l,
	   unsigned int *buffer_i, unsigned int *buff_len,
	   char *buffer)
{
	char *u_integer;

	u_integer = _uitoa_b_o_h(va_arg(arg_l, unsigned int), 10, 0);
	str_concat(u_integer, buffer, buffer_i, buff_len);
}


/**
 * f_oct - The "%o" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void f_oct(va_list arg_l,
	   unsigned int *buffer_i, unsigned int *buff_len,
	   char *buffer)
{
	char *octal;

	octal = _uitoa_b_o_h(va_arg(arg_l, unsigned int), 8, 0);
	str_concat(octal, buffer, buffer_i, buff_len);
}

/**
 * f_hexl - The "%x" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void f_hexl(va_list arg_l,
	    unsigned int *buffer_i, unsigned int *buff_len,
	    char *buffer)
{
	char *hex;

	hex = _uitoa_b_o_h(va_arg(arg_l, unsigned int), 16, 0);
	str_concat(hex, buffer, buffer_i, buff_len);
}

/**
 * f_hexu - The "%X" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void f_hexu(va_list arg_l,
	    unsigned int *buffer_i, unsigned int *buff_len,
	    char *buffer)
{
	char *hex;

	hex = _uitoa_b_o_h(va_arg(arg_l, unsigned int), 16, 1);
	str_concat(hex, buffer, buffer_i, buff_len);
}
