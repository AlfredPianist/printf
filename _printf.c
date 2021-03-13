#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int counter_f, counter_s;
	char str[100], *str_2;

	counter_f = counter_s = 0;

	va_start(args, format);
	while (format[counter_f] != '\0')
	{
		if (format[counter_f] == '%')
		{
			switch (format[counter_f + 1])
			{
			case 'c':
				str[counter_s] = (char) va_arg(args, int);
				counter_f += 2;
				counter_s++;
				continue;
			case 's':
				str_2 = va_arg(args, char *);
				while (*str_2 != '\0')
				{
					str[counter_s] = *str_2;
					str_2++;
					counter_s++;
				}
				counter_f += 2;
				continue;
			case '%':
				str[counter_s] = '%';
				counter_f += 2;
				counter_s++;
				continue;
			default:
				return (-1);
			}
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
