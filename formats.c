#include "holberton.h"

/**
 * f_char - The "%c" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
char *f_char(va_list arg_l, unsigned int precision)
{
	precision = precision;

	char *ch;

	ch = _alloc(ch, 2 * sizeof(*ch));

	ch[0] = (char) va_arg(arg_l, int);
	ch[1] = '\0';

	return (ch);
	/* check_buffer(buffer, buffer_i, buff_len, (char) va_arg(arg_l, int)); */
}

/**
 * f_str - The "%s" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
char *f_str(va_list arg_l, unsigned int precision)
{
	char *orig, *dup;
	unsigned int len_dup;

	dup = NULL;
	len_dup = 0;
	orig = va_arg(arg_l, char *);
	if (orig == NULL)
		orig = "(null)";

	len_dup = str_len(orig);
	dup = _alloc(dup, len_dup * sizeof(*dup));
	dup = str_cpy(orig, dup);

	if (precision != UINT_MAX)
	{
		if (len_dup - 1 > precision)
		{
			dup = _realloc(dup, len_dup * sizeof(*dup), precision * sizeof(*dup));
			if (dup == NULL)
			{
				printf("NULO\n");
				return ("");
			}
		}
	}

	return (dup);
}

/**
 * f_perc - Prints the '%' character.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
char *f_perc(va_list arg_l, unsigned int precision)
{
	arg_l = arg_l;
	precision = precision;

	char *perc;

	perc = _alloc(perc, 2 * sizeof(*perc));

	perc[0] = '%';
	perc[1] = '\0';

	return (perc);
	/* check_buffer(buffer, buffer_i, buff_len, '%'); */
}

/**
 * f_int - The "%d" and "%i" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
char *f_int(va_list arg_l, unsigned int precision)
{
	char *integer;

	integer = _itoa(va_arg(arg_l, int));
	return (integer);
	/* str_concat(integer, buffer, buffer_i, buff_len); */
	/* free(integer); */
}
