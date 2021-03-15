#include "holberton.h"

/**
 * get_format - chooses the format to be used.
 * @s: the character to be compared.
 *
 * Description: iterates from a set of formats of format_t type
 *              and chooses the adecuate one. If it couldn't be found, return
 *              NULL.
 * Return: The pointer to the address of the format specifier to be operated.
 *          Otherwise, return NULL.
 */
void (*get_format(char s))(va_list, unsigned int *, unsigned int *, char *)
{
	format_t formats[] = {
		{"c", f_char},
		{"s", f_str},
		{"%", f_perc},
		{"d", f_int},
		{"i", f_int},
		{"R", f_rot},
		{NULL, NULL}
	};
	unsigned int counter;

	counter = 0;

	while (formats[counter].format != NULL)
	{
		if (s == formats[counter].format[0])
			return (formats[counter].format_f);
		counter++;
	}
	return (NULL);
}

