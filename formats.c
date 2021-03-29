#include "holberton.h"

/**
 * f_char - The "%c" format specifier.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The formatted "%c" string.
 */
char *f_char(va_list arg_l, unsigned int precision)
{
	char *ch;

	precision = precision;
	ch = NULL;
	ch = _alloc(ch, 2 * sizeof(*ch));

	ch[0] = (char) va_arg(arg_l, int);
	ch[1] = '\0';

	return (ch);
}

/**
 * f_str - The "%s" format specifier.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The formatted "%s" string.
 */
char *f_str(va_list arg_l, unsigned int precision)
{
	char *orig, *buf;
	unsigned int len_buf;

	buf = NULL;
	len_buf = 0;
	orig = va_arg(arg_l, char *);
	if (orig == NULL)
		orig = "(null)";

	len_buf = str_len(orig);
	buf = _alloc(buf, len_buf * sizeof(*buf));
	buf = str_cpy(orig, buf);

	if ((precision != UINT_MAX) && (len_buf - 1 > precision))
	{
		buf = _realloc(buf, len_buf * sizeof(*buf), precision * sizeof(*buf));
		if (buf == NULL)
			return ("");
	}

	return (buf);
}

/**
 * f_perc - Prints the '%' character.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The "%" string.
 */
char *f_perc(va_list arg_l, unsigned int precision)
{
	char *perc;

	arg_l = arg_l;
	precision = precision;
	perc = NULL;
	perc = _alloc(perc, 2 * sizeof(*perc));

	perc[0] = '%';
	perc[1] = '\0';

	return (perc);
}

/**
 * f_int - The "%d" and "%i" format specifier.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The formatted "%d", "%i", "%hd" or "%hi" string.
 */
char *f_int(va_list arg_l, unsigned int precision)
{
	char *integer;

	integer = _itoa(va_arg(arg_l, int));
	if (precision != UINT_MAX)
		integer = prec_int(integer, precision);

	return (integer);
}
