#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	/* /\* Sentence - CHECK *\/ */
	/* len =  _printf("Let's try to printf a simple sentence.\n"); */
	/* len2 = printf("Let's try to printf a simple sentence.\n"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */

	/* /\* Integers - CHECK *\/ */
	/* printf("MAX IIIINT = %d\n", INT_MAX); */
	/* _printf("MAX IIIINT = %d\n", INT_MAX); */
	/* printf("MIN IIIINT = %d\n", INT_MIN); */
	/* _printf("MIN IIIINT = %d\n", INT_MIN); */
	/* _printf("Length:[%d, %i]\n", len, len); */
	/* printf("Length:[%d, %i]\n", len2, len2); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("Negative:[%d]\n", -762534); */
	/* len2 = printf("Negative:[%d]\n", -762534); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */

	/* /\* Unsigned integers - CHECK *\/ */
	/* ui = (unsigned int)INT_MAX + 1024; */
	/* _printf("Unsigned:[%u]\n", ui); */
	/* printf("Unsigned:[%u]\n", ui); */

	/* /\* Binary - CHECK *\/ */
	/* _printf("Binary:[%b]\n", ui); */

	/* /\* Octals - CHECK *\/ */
	/* _printf("Unsigned octal:[%o]\n", ui); */
	/* printf("Unsigned octal:[%o]\n", ui); */

	/* /\* Hex - CHECK *\/ */
	/* _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui); */
	/* printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui); */

	/* /\* Chars and strings - CHECK *\/ */
	/* len = _printf("Character:[%c]\n", 'H'); */
	/* len2 = printf("Character:[%c]\n", 'H'); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("%s\n", "I am a string !"); */
	/* len2 = printf("%s\n", "I am a string !"); */
	/* printf("Len mine = %d, Len orig = %d\n", len, len2); */
	/* len = _printf("String:[%s]\n", "I am a string !"); */
	/* len2 = printf("String:[%s]\n", "I am a string !"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */

	/* /\* %S specifier - CHECK *\/ */
	/* _printf("%S", "No special character."); */
	/* _printf("%S", "\n\n"); */
	/* _printf("%S", "\x01\x02\x03\x04\x05\x06\x07"); */
	/* _printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n"); */
	/* _printf(""); */
	/* _printf("- What did you say?\n- %S\n- That's what I thought.\n", ""); */

	/* /\* Addresses - CHECK *\/ */
	/* addr = (void *)0x7ffe637541f0; */
	/* _printf("Address:[%p]\n", addr); */
	/* printf("Address:[%p]\n", addr); */
	/* _printf("%p", (void *)0x7fff5100b608); */
	/* len = printf("%p", NULL); */
	/* len2 = _printf("%p", NULL); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* _printf("Can you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8); */
	/* _printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8); */
	/* _printf(""); */
	/* _printf("Can you print an address?\n%p\nNice!\n", (void *)-1); */
	/* _printf("%pppp", (void *)0x7fff5100b6f8); */

	/* /\* Percent sign - CHECK *\/ */
	/* len = _printf("Percent:[%%]\n"); */
	/* len2 = printf("Percent:[%%]\n"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* _printf("Len:[%d]\n", len); */
	/* printf("Len:[%d]\n", len2); */

	/* /\* Unknown format specifier - CHECK *\/ */
	/* _printf("Unknown:[%y]\n"); */
	/* printf("Unknown:[%y]\n"); */

	/* Modifiers */
	/* _printf("%ld", 1024L); */
	/* _printf("\n"); */
	/* _printf("%ld", -1024L); */
	/* _printf("\n"); */
	/* _printf("%ld", 0L); */
	/* _printf("\n"); */
	/* _printf("%ld", LONG_MAX); */
	/* _printf("\n"); */
	/* _printf("%ld", LONG_MIN); */
	/* _printf("\n"); */
	/* _printf("There is %ld bytes in %ld KB\n", 1024L, 1L); */
	/* _printf("%ld - %ld = %ld\n", 1024L, 2048L, -1024L); */
	/* _printf("%ld + %ld = %ld\n", LONG_MIN, LONG_MAX, (LONG_MIN + LONG_MAX)); */
	/* _printf("%li", 1024L); */
	/* _printf("\n"); */
	/* _printf("%li", -1024L); */
	/* _printf("\n"); */
	/* _printf("%li", 0L); */
	/* _printf("\n"); */
	/* _printf("%li", LONG_MAX); */
	/* _printf("\n"); */
	/* _printf("%li", LONG_MIN); */
	/* _printf("\n"); */
	/* _printf("There is %li bytes in %li KB\n", 1024L, 1L); */
	/* _printf("%li - %li = %li\n", 1024L, 2048L, -1024L); */
	/* _printf("%li + %li = %li\n", LONG_MIN, LONG_MAX, (LONG_MIN + LONG_MAX)); */
	/* _printf("%lu", 1024UL); */
	/* _printf("%lu", 0UL); */
	/* _printf("%lu", ULONG_MAX); */
	/* _printf("There is %lu bytes in %lu KB\n", 1024UL, 1UL); */
	/* _printf("%lu - %lu = %lu\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL); */
	_printf("%h\n");
	_printf("%l\n");

	/* Flags */
	/* len2 = _printf("%5c\n", 78); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */

	/* Precision */
	/* printf("%+d\n", 1000000000); */
	/* printf("%08d\n", 123456); */
	/* printf("%#x\n", 1); */
	/* printf("% +1x\n", -10); */

	/* Reversed strings - CHECK */
	/* len2 = _printf("%r\n", "Hola mundo"); */
	/* _printf("Len = %d\n", len2); */

	/* /\* Rot13 - CHECK *\/ */
	/* len2 = _printf("Hola Mundo en ROT13 = %R, y al reves = %R.\n", "Hola Mundo", "Ubyn Zhaqb"); */
	/* _printf("Len 2 = %d\n", len2); */

	/* /\* Testing edge cases *\/ */
	/* printf ("Testing edge cases\n"); */

	/* /\* Check *\/ */
	/* printf("Case 1: empty string.\n"); */
	/* len = printf(""); */
	/* len2 = _printf(""); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* printf("Case 2: NULL.\n"); */
	/* len = printf(NULL); */
	/* len2 = _printf(NULL); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* printf("Case 3: wrong format.\n"); */
	/* len = printf("some %y format\n", "something"); */
	/* len2 = _printf("some %y format\n", "something"); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* printf("Case 4: more arguments than formats.\n"); */
	/* len = printf("more %c arguments %c than formats\n", 's', 'p', 'q'); */
	/* len2 = _printf("more %c arguments %c than formats\n", 's', 'p', 'q'); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* printf("Case 5: wrong format for argument.\n"); */
	/* len = printf("wrong format for argument %c\n", "char"); */
	/* len2 = printf("wrong format for argument %c\n", "char"); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* printf("Case 6: more formats than arguments.\n"); */
	/* len = printf("more %c formats %c than %c arguments\n", 'r', 'q'); */
	/* len2 = _printf("more %c formats %c than %c arguments\n", 'r', 'q'); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* printf("Case 7: testing escape characters.\n"); */
	/* len = printf("Other escape characters: \t \a \v \f \r \"\n"); */
	/* len2 = _printf("Other escape characters: \t \a \v \f \r \"\n"); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* printf("Case 8: testing NULL string.\n", len); */
	/* len = printf("%s\n", NULL); */
	/* len2 = _printf("%s\n", NULL); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* printf("Case 9: testing buffer.\n"); */
	/* len = printf("1dkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlc1234567891012\n"); */
	/* len2 = _printf("2dkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlclcakfbkjdhflbbhkjljkfsdcfshlsbkjsdlkkascshlbhbjdkfasofhjaldkjfvbakdsjhfvlkjshaflkvsaflhkffakkdfasfdjsalfkjfasdkfljhasdkfljhaskdjflhakdjflakdjsfdjldjssajdhjsljdlc1234567891012\n"); */
	/* printf("Len 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* printf("Case 10: only \"%%%\".\n"); */
	/* len = _printf("%%%"); */
	/* len2 = printf("%%%"); */
	/* printf("\nLen 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* printf("Case 11: some string ending with \"%%\".\n"); */
	/* len = printf("printf 1%"); */
	/* len2 = _printf("printf 2%"); */
	/* printf("\nLen 1 = %d, Len 2 = %d\n\n", len, len2); */

	/* /\* Check *\/ */
	/* printf("Case 12: multiple strings and chars.\n"); */
	/* len = printf("%s %c", NULL, 'C'); */
	/* len2 = _printf("%s %c", NULL, 'C'); */
	/* printf("\nLen 1 = %d, Len 2 = %d\n\n", len, len2); */

	return (0);
}
