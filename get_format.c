#include "holberton.h"
void (*get_format (char s))(va_list, unsigned int *, unsigned int *, char *)
{
	format_t formats[] = {
		{"c", f_char},
		{"s", f_str},
		{"%", f_perc},
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

void f_char(va_list format, unsigned int *counter_f, unsigned int *counter_s, char *str)
{
	str[*counter_s] = (char) va_arg(format, int);
	*counter_f += 2;
	*counter_s += 1;
}

void f_str(va_list format, unsigned int *counter_f, unsigned int *counter_s, char *str)
{
	char *str_2;

	str_2 = va_arg(format, char *);
	while (*str_2 != '\0')
	{
		str[*counter_s] = *str_2;
		str_2++;
		*counter_s += 1;
	}
	*counter_f += 2;
}
void f_perc(va_list format, unsigned int *counter_f, unsigned int *counter_s, char *str)
{
	format = format;
	str[*counter_s] = '%';
	*counter_f += 2;
	*counter_s += 1;
}
