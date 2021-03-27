#include "holberton.h"

/**
 * _atoi - Converts a number of the format given to unsigned int.
 * @format: The format string.
 *
 * Return: The converted number.
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
void (*get_f(const char **f))(va_list, int *, unsigned int *, char *)
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
 * @f: The character to be compared.
 * @i: The current index of the format string.
 *
 * Description: Iterates from a set of formats of format_t type
 *              and chooses the adecuate one. If it couldn't be found, return
 *              NULL.
 * Return: The pointer to the address of the format specifier to be operated.
 *          Otherwise, return NULL.
 */
void form(const char **format,
	  va_list arg_l, int *buffer_i, unsigned int *buff_len, char *buffer)
{
	void (*f)(va_list, int *, unsigned int *, char *);
	short counter;
	unsigned int precision;

	precision = counter = 0;

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

	printf("Precision = %u\n", precision);
	f = get_f(format);
	if (f == NULL)
		check_buffer(buffer, buffer_i, buff_len, *(*(format++)));
	else
		f(arg_l, buffer_i, buff_len, buffer);
}
