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
	unsigned int buffer_i, buff_len;
	char *buffer;

	buffer_i = buff_len = 0, buffer = NULL;
	buffer = _alloc(buffer, 1024);

	if (format == NULL || buffer == NULL || (*format == '%' && !*(format + 1)))
		return (-1);

	va_start(arg_l, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (*(format + 1) == '\0')
			{
				print_buffer(buffer, &buff_len), free(buffer), va_end(arg_l);
				return (-1);
			}
			form = get_format(*(format + 1));
			if (form == NULL)
			{
				check_buffer(buffer, &buffer_i, &buff_len, *(format++));
				continue;
			}
			form(arg_l, &buffer_i, &buff_len, buffer), format += 2;
		}
		else
			check_buffer(buffer, &buffer_i, &buff_len, *(format++));
	}
	va_end(arg_l);
	buffer[buffer_i] = '\0', print_buffer(buffer, &buff_len), free(buffer);
	return (buff_len);
}
