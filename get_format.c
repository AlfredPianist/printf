#include "holberton.h"

/**
 * get_f - chooses the format to be used.
 * @s: the character to be compared.
 *
 * Description: iterates from a set of formats of format_t type
 *              and chooses the adecuate one. If it couldn't be found, return
 *              NULL.
 * Return: The pointer to the address of the format specifier to be operated.
 *          Otherwise, return NULL.
 */
void (*get_f(const char *f))(va_list, unsigned int *, unsigned int *, char *)
{
	format_t formats[] = {
		{"c", f_char}, {"s", f_str}, {"%", f_perc},
		{"d", f_int}, {"i", f_int},
		{"b", f_bin}, {"u", f_uint}, {"o", f_oct},
		{"x", f_hexl}, {"X", f_hexu},
		{"p", f_add}, {"S", f_strh},
		{"r", f_rev}, {"R", f_rot},
		{"ld", m_ld}, {"li", m_ld},
		{"lu", m_lu},
		{NULL, NULL}
	};
	unsigned int counter, format_count;

	counter = format_count = 0;

	while (formats[counter].format != NULL)
	{
		if (str_cmp(f, formats[counter].format))
		{
			while (formats[counter].format[format_count++] != '\0')
				f++;
			return (formats[counter].format_f);
		}
		counter++;
	}
	return (NULL);
}
