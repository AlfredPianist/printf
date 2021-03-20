#include "holberton.h"

/**
 * get_f - Chooses the format to be used.
 * @f: The character to be compared.
 * @i: The current index of the format string.
 *
 * Description: Iterates from a set of formats of format_t type
 *              and chooses the adecuate one. If it couldn't be found, return
 *              NULL.
 * Return: The pointer to the address of the format specifier to be operated.
 *          Otherwise, return NULL.
 */
void (*get_f(const char *f, short *i))(va_list, int *, unsigned int *, char *)
{
	format_t formats[] = {
		{"li", m_ld}, {"ld", m_ld},
		{"lu", m_lu}, {"lo", m_lo}, {"lx", m_lx}, {"lX", m_lX},
		{"hi", f_int}, {"hd", f_int},
		{"hu", f_uint}, {"ho", f_oct}, {"hx", f_hexl}, {"hX", f_hexu},
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
		{
			*i += str_cmp(f, formats[counter].format) + 1;
			return (formats[counter].format_f);
		}
		counter++;
	}
	return (NULL);
}

