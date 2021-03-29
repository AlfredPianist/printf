#include "holberton.h"

/**
 * f_bin - The "%b" custom format specifier.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The formatted "%b" string.
 */
char *f_bin(va_list arg_l, unsigned int precision)
{
	char *binary;

	precision = precision;
	binary = _uitoa_b_o_h(va_arg(arg_l, unsigned int), 2, 0);

	return (binary);
}

/**
 * f_uint - The "%u" format specifier.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The formatted "%u" or "%hu" string.
 */
char *f_uint(va_list arg_l, unsigned int precision)
{
	char *u_integer;

	u_integer = _uitoa_b_o_h(va_arg(arg_l, unsigned int), 10, 0);
	if (precision != UINT_MAX)
		u_integer = prec_uint(u_integer, precision);

	return (u_integer);
}


/**
 * f_oct - The "%o" format specifier.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The formatted "%o" or "%ho" string.
 */
char *f_oct(va_list arg_l, unsigned int precision)

{
	char *octal;

	octal = _uitoa_b_o_h(va_arg(arg_l, unsigned int), 8, 0);
	if (precision != UINT_MAX)
		octal = prec_uint(octal, precision);

	return (octal);
}

/**
 * f_hexl - The "%x" format specifier.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The formatted "%x" or "%hx" string.
 */
char *f_hexl(va_list arg_l, unsigned int precision)
{
	char *hex;

	hex = _uitoa_b_o_h(va_arg(arg_l, unsigned int), 16, 0);
	if (precision != UINT_MAX)
		hex = prec_uint(hex, precision);

	return (hex);
}

/**
 * f_hexu - The "%X" format specifier.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The formatted "%X" or "%hX" string.
 */
char *f_hexu(va_list arg_l, unsigned int precision)
{
	char *hex;

	hex = _uitoa_b_o_h(va_arg(arg_l, unsigned int), 16, 1);
	if (precision != UINT_MAX)
		hex = prec_uint(hex, precision);

	return (hex);
}
