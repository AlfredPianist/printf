#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* When finished, delete following library */
/* #include <stdio.h> */

/* Structures */
/**
 * struct format_s - A format specifier with its respective function.
 * @format: The format specifier.
 * @format_f: The function pointer to the format.
 */
typedef struct format_s
{
	char *format;
	void (*format_f)(va_list, unsigned int *, unsigned int *, char *);
} format_t;

/* MAIN PROGRAM */
int _printf(const char *format, ...);
void (*get_format(char s))(va_list, unsigned int *, unsigned int *, char *);

/* FORMAT SPECIFIERS */
/* Mandatory */
void f_char(va_list arg_l,
	    unsigned int *buffer_i, unsigned int *buff_len,
	    char *buffer);
void f_str(va_list arg_l,
	   unsigned int *buffer_i, unsigned int *buff_len,
	   char *buffer);
void f_perc(va_list arg_l,
	    unsigned int *buffer_i, unsigned int *buff_len,
	    char *buffer);
void f_int(va_list arg_l,
	   unsigned int *buffer_i, unsigned int *buff_len,
	   char *buffer);

/* Advanced */
void f_bin(va_list arg_l,
	   unsigned int *buffer_i, unsigned int *buff_len,
	   char *buffer);
void f_uint(va_list arg_l,
	   unsigned int *buffer_i, unsigned int *buff_len,
	    char *buffer);
void f_oct(va_list arg_l,
	   unsigned int *buffer_i, unsigned int *buff_len,
	   char *buffer);
void f_hexu(va_list arg_l,
	    unsigned int *buffer_i, unsigned int *buff_len,
	    char *buffer);
void f_hexl(va_list arg_l,
	    unsigned int *buffer_i, unsigned int *buff_len,
	    char *buffer);
void f_rot(va_list arg_l,
	   unsigned int *buffer_i, unsigned int *buff_len,
	   char *buffer);

/* EXTRA */
/* Utilities */
char *_itoa(long int number);
char *_uitoa_b_o_h(unsigned int number, short base, short upper);
void rot13(char *str);

/* String manipulation */
void str_concat(char *orig, char *buffer,
		 unsigned int *buffer_i, unsigned int *buff_len);
char *str_cpy(char *orig, char *dest);

/* Memory management */
void *_alloc(void *buffer, unsigned int size);
void check_buffer(char *buffer,
		  unsigned int *buffer_i, unsigned int *buff_len, char c);
void *_realloc(void *buffer, unsigned int old_size, unsigned int new_size);

#endif
