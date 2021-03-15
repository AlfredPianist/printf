#include "holberton.h"

/**
 * f_rot - The "%R" format specifier.
 * @arg_l: The argument list to be operated.
 * @format_i: The address of the current position of the
 *             char *format variable.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void f_rot(va_list arg_l,
	   unsigned int *format_i, unsigned int *buffer_i,
	   char *buffer)
{
	unsigned int index;
	char *str, *rot;

	rot = str = NULL;
	index = 0;

	str = va_arg(arg_l, char *);

	while (str[index] != '\0')
		index++;

	rot = _alloc(rot, sizeof(*rot) * index + 1);
	rot = str_cpy(str, rot);
	rot13(rot);

	str_concat(rot, buffer, buffer_i);

	*format_i += 2;
}
