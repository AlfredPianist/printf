#include <stdio.h>
#include "holberton.h"

/**
 * _printf - Our implementation of the "printf" function.
 * @format: The argument list.
 *
 * Description: Iterates through every character of format and if there's a
 *              '%' character, it will format its output depending on its
 *              specifier.
 * Return: The length of the printed string without the NUL character
 *         or -1 if format is NULL.
 */
int _printf(const char *format, ...)
{
	void (*form)(va_list, unsigned int *, unsigned int *, char *);
	va_list arg_l;
	unsigned int format_i, buffer_i;
	char *buffer;

	format_i = buffer_i = 0;
	buffer = NULL;

	if (format == NULL)
		return (-1);

	buffer = _alloc(buffer);
	va_start(arg_l, format);
	while (format[format_i] != '\0')
	{
		if (format[format_i] == '%')
		{
			form = get_format(format[format_i + 1]);
			if (form == NULL)
			{
				buffer[buffer_i++] = format[format_i++];
				buffer = check_buffer(buffer, &buffer_i);
				continue;
			}
			form(arg_l, &format_i, &buffer_i, buffer);
		}
		else
		{
			buffer[buffer_i++] = format[format_i++];
			buffer = check_buffer(buffer, &buffer_i);
		}
	}
	va_end(arg_l);
	write(1, buffer, buffer_i);
	free(buffer);
	return (buffer_i);
}
