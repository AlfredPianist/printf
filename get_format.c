#include "holberton.h"

/**
 * _atoi - Converts a number of the format (width or precision) given
 *         to unsigned int.
 * @format: The format string.
 *
 * Return: The width or precision number.
 */
unsigned int _atoi(const char **format)
{
	unsigned int counter, digits;
	int number, factor;

	digits = counter = number = 0;
	factor = 1;

	if (**format < '0' || **format > '9')
		return (0);

	while ((*format)[digits] >= '0' && (*format)[digits] <= '9')
		digits++;

	for (counter = 0; counter < digits - 1; counter++)
		factor *= 10;

	counter = 0;
	while (counter < digits)
	{
		number += (*(*format)++ - '0') * factor;
		factor /= 10;
		counter++;
	}
	return (number);
}

/**
 * get_f - Chooses the format to be used.
 * @f: The format string to be compared.
 *
 * Description: Iterates from a set of formats of format_t type
 *              and chooses the adecuate one. If it couldn't be found, return
 *              NULL.
 * Return: The pointer to the address of the format specifier to be operated.
 *          Otherwise, return NULL.
 */
char *(*get_f(const char **f))(va_list, unsigned int)
{
	format_t formats[] = {
		{"li", m_ld}, {"ld", m_ld},
		{"lu", m_lu}, {"lo", m_lo}, {"lx", m_lx}, {"lX", m_lX},
		{"hi", f_int}, {"hd", f_int},
		{"hu", f_uint}, {"ho", f_oct}, {"hx", f_hexl}, {"hX", f_hexu},
		{"h", f_perc}, {"l", f_perc},
		{"c", f_char}, {"s", f_str}, {"%", f_perc},
		{"d", f_int}, {"i", f_int},
		{"b", f_bin}, {"u", f_uint}, {"o", f_oct},
		{"x", f_hexl}, {"X", f_hexu},
		{"p", f_add}, {"S", f_strh},
		{"r", f_rev}, {"R", f_rot},
		{NULL, NULL}
	};
	short counter;

	counter = 0;

	while (formats[counter].format != NULL)
	{
		if (str_cmp(*f, formats[counter].format) != 0)
		{
			*f += str_cmp(*f, formats[counter].format);
			return (formats[counter].format_f);
		}
		counter++;
	}
	return (NULL);
}

/**
 * form - Parses the format string.
 * @format: The format string.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 *
 * Description: Parses the entirety of the format string and concatenates to
 *              buffer the result given any flags, width, precision and
 *              format specifier.
 */
void form(const char **format,
	  va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer)
{
	char *(*f)(va_list, unsigned int), *f_output;
	unsigned  int precision;

	precision = UINT_MAX;

	if (**format == '.')
	{
		*format += 1;
		if (**format == '*')
		{
			precision = va_arg(arg_l, unsigned int);
			*format += 1;
		}
		else
			precision = _atoi(format);
	}

	f = get_f(format);
	if (f == NULL)
		check_buffer(buffer, buffer_i, buff_len, *(*(format++)));
	else
	{
		f_output = f(arg_l, precision);
		str_concat(f_output, buffer, buffer_i, buff_len);
		if (f_output[0] != '\0')
			free(f_output);
	}
}
