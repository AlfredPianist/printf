#include "holberton.h"

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
 * @f: The character to be compared.
 *
 * Description: Iterates from a set of formats of format_t type
 *              and chooses the adecuate one. If it couldn't be found, return
 *              NULL.
 * Return: The pointer to the address of the format specifier to be operated.
 *          Otherwise, return NULL.
 */
void (*get_f(const char *f))(va_list, int *, unsigned int *, char *)
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
		if (str_cmp(f, formats[counter].format) != 0)
			return (formats[counter].format_f);
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

	printf("format enter form = %s\n", *format);
	if (**format == '.')
	{
		*format += 1;
		precision = _atoi(format);
	}
	
	printf("format exit _aoti  = %s, number = %u\n", *format, precision);
	/* if (f == 0) */
	/* { */
	/* 	check_buffer(buffer, buffer_i, buff_len, *(*(format++))); */
	/* 	continue; */
	/* } */
	/* f(arg_l, buffer_i, buff_len, buffer), format += f_index, f_index = 0; */
}
