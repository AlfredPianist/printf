#include "holberton.h"

/**
 * m_ld - The "l" modifier for the "d" and "i" format specifier.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The formatted "%ld" or "%li" string.
 */
char *m_ld(va_list arg_l, unsigned int precision)
{
	char *integer;

	integer = _itoa(va_arg(arg_l, long int));
	if (precision != UINT_MAX)
		integer = prec_int(integer, precision);

	return (integer);
}

/**
 * m_lu - The "l" modifier for the "u" format specifier.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The formatted "%lu" string.
 */
char *m_lu(va_list arg_l, unsigned int precision)
{
	char *u_integer;

	u_integer = _uitoa_b_o_h(va_arg(arg_l, unsigned long int), 10, 0);
	if (precision != UINT_MAX)
		u_integer = prec_uint(u_integer, precision);

	return (u_integer);
}

/**
 * m_lo - The "l" modifier for the "o" format specifier.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The formatted "%lo" string.
 */
char *m_lo(va_list arg_l, unsigned int precision)
{
	char *octal;

	octal = _uitoa_b_o_h(va_arg(arg_l, unsigned long int), 8, 0);
	if (precision != UINT_MAX)
		octal = prec_uint(octal, precision);

	return (octal);
}

/**
 * m_lx - The "l" modifier for the "x" format specifier.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The formatted "%lx" string.
 */
char *m_lx(va_list arg_l, unsigned int precision)
{
	char *hex;

	hex = _uitoa_b_o_h(va_arg(arg_l, unsigned long int), 16, 0);
	if (precision != UINT_MAX)
		hex = prec_uint(hex, precision);

	return (hex);
}

/**
 * m_lX - The "l" modifier for the "X" format specifier.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The formatted "%lX" string.
 */
char *m_lX(va_list arg_l, unsigned int precision)
{
	char *hex;

	hex = _uitoa_b_o_h(va_arg(arg_l, unsigned long int), 16, 1);
	if (precision != UINT_MAX)
		hex = prec_uint(hex, precision);

	return (hex);
}
