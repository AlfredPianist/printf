#include <stdio.h>
#include "holberton.h"

int _printf(const char *format, ...)
{
	void (*form)(va_list, unsigned int *, unsigned int *, char *);
	va_list args;
	unsigned int counter_f, counter_s;
	char str[100];

	counter_f = counter_s = 0;

	va_start(args, format);
	while (format[counter_f] != '\0')
	{
		if (format[counter_f] == '%')
		{
			form = get_format(format[counter_f + 1]);
			
			if (form == NULL)
				return (-1);
			form(args, &counter_f, &counter_s, str);
		}
		else
		{
			str[counter_s] = format[counter_f];
			counter_s++;
			counter_f++;
		}
	}
	va_end(args);

	write(1, str, counter_s);
	return (counter_s);
}
