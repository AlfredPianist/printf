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
	va_list arg_l;
	int buffer_i;
	unsigned int buff_len;
	char *buffer;

	buffer_i = buff_len = 0, buffer = NULL;
	buffer = _alloc(buffer, 1024);

	if (!format || !buffer || (*format == '%' && *(format + 1) == '\0'))
	{
		free(buffer);
		return (-1);
	}

	va_start(arg_l, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (*(format + 1) == '\0')
			{
				va_end(arg_l), write(1, buffer, buffer_i), free(buffer);
				return (-1);
			}
			format++;
			form(&format, arg_l, &buffer_i, &buff_len, buffer);
			printf("format _printf = %s\n", format);
		}
		else
			check_buffer(buffer, &buffer_i, &buff_len, *(format++));
	}
	va_end(arg_l);
	buffer[buffer_i] = '\0', write(1, buffer, buffer_i), free(buffer);
	return (buff_len);
}
