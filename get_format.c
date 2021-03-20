#include "holberton.h"

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
void (*get_f(char f))(va_list, unsigned int *, unsigned int *, char *)
{
	format_t formats[] = {
		{"c", f_char}, {"s", f_str}, {"%", f_perc},
		{"d", f_int}, {"i", f_int},
		{"b", f_bin}, {"u", f_uint}, {"o", f_oct},
		{"x", f_hexl}, {"X", f_hexu},
		{"p", f_add}, {"S", f_strh},
		{"r", f_rev}, {"R", f_rot},
		{NULL, NULL}
	};
	unsigned int counter;

	counter = 0;

	while (formats[counter].format != NULL)
	{
		if (f == formats[counter].format[0])
			return (formats[counter].format_f);
		counter++;
	}
	return (NULL);
}

