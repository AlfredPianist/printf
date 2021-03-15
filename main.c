#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	/* unsigned int ui; */
	/* void *addr; */

	/* /\* Sentence - CHECK *\/ */
	/* len =  _printf("Let's try to printf a simple sentence.\n"); */
	/* len2 = printf("Let's try to printf a simple sentence.\n"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */

	/* /\* Integers - CHECK *\/ */
	printf("MAX IIIINT = %d\n", INT_MAX);
	_printf("MAX IIIINT = %d\n", INT_MAX);
	/* printf("MIN IIIINT = %d\n", INT_MIN); */
	/* _printf("MIN IIIINT = %d\n", INT_MIN); */
	/* _printf("Length:[%d, %i]\n", len, len); */
	/* printf("Length:[%d, %i]\n", len2, len2); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("Negative:[%d]\n", -762534); */
	/* len2 = printf("Negative:[%d]\n", -762534); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */

	/* /\* Unsigned integers *\/ */
	/* ui = (unsigned int)INT_MAX /\* + 1024 *\/; */
	/* _printf("Unsigned:[%u]\n", ui); */
	/* printf("Unsigned:[%u]\n", ui); */

	/* /\* Octals *\/ */
	/* _printf("Unsigned octal:[%o]\n", ui); */
	/* printf("Unsigned octal:[%o]\n", ui); */

	/* /\* Hex *\/ */
	/* _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui); */
	/* printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui); */

	/* /\* Chars - CHECK *\/ */
	/* len = _printf("Character:[%c]\n", 'H'); */
	/* len2 = printf("Character:[%c]\n", 'H'); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("String:[%s]\n", "I am a string !"); */
	/* len2 = printf("String:[%s]\n", "I am a string !"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */

	/* /\* Addresses *\/ */
	/* addr = (void *)0x7ffe637541f0; */
	/* _printf("Address:[%p]\n", addr); */
	/* printf("Address:[%p]\n", addr); */

	/* /\* Percent sign - CHECK *\/ */
	/* len = _printf("Percent:[%%]\n"); */
	/* len2 = printf("Percent:[%%]\n"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* _printf("Len:[%d]\n", len); */
	/* printf("Len:[%d]\n", len2); */

	/* /\* Unknown format specifier - CHECK *\/ */
	/* _printf("Unknown:[%r]\n"); */
	/* printf("Unknown:[%r]\n"); */

	/* Flags */
	/* len2 = _printf("%5c\n", 78); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */

	/* Precision */
	/* printf("%+d\n", 1000000000); */
	/* printf("%08d\n", 123456); */
	/* printf("%#x\n", 1); */
	/* printf("% +1x\n", -10); */

	/* Rot13 - CHECK */
	len2 = _printf("Hola Mundo en ROT13 = %R, y al reves = %R.\n", "Hola Mundo", "Ubyn Zhaqb");
	_printf("Len 2 = %d\n", len2);

	/* /\* Testing edge cases *\/ */
	/* printf ("Testing edge cases\n"); */

	/* /\* Check *\/ */
	/* len = printf(""); */
	/* len2 = _printf(""); */
	/* printf("\nCase 1: empty string = %d\n", len); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* len = printf(NULL); */
	/* len2 = _printf(NULL); */
	/* printf("\nCase 2: NULL = %d\n", len); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* len = printf("some %y format\n", "something"); */
	/* len2 = _printf("some %y format\n", "something"); */
	/* printf("Case 3: wrong format = %d\n", len); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* len = printf("more %c arguments %c than formats\n", 's', 'p', 'q'); */
	/* len2 = _printf("more %c arguments %c than formats\n", 's', 'p', 'q'); */
	/* printf("Case 4: more arguments than formats = %d\n", len); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* len = printf("wrong format for argument %c\n", "char"); */
	/* len2 = printf("wrong format for argument %c\n", "char"); */
	/* printf("Case 5: wrong format for argument = %d\n", len); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* len = printf("more %c formats %c than %c arguments\n", 'r', 'q'); */
	/* len2 = _printf("more %c formats %c than %c arguments\n", 'r', 'q'); */
	/* printf("Case 6: more formats than arguments = %d\n", len); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* len = printf("Other escape characters: \t \a \v \f \r \"\n"); */
	/* len2 = _printf("Other escape characters: \t \a \v \f \r \"\n"); */
	/* printf("Case 7: testing escape characters = %d\n", len); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* len = printf("%s\n", NULL); */
	/* len2 = _printf("%s\n", NULL); */
	/* printf("Case 8: testing NULL string = %d\n", len); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* len = printf("asdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfa%dsfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlc123456789101112\n", 564398798); */
	/* len2 = _printf("asdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfa%dsfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlc123456789101112\n", 564398798); */
	/* printf("Case 9: testing buffer = %d\n", len + 1); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len + 1, len2 + 1); */

	return (0);
}
