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
	/* unsigned int ui; */
	/* void *addr; */
	char *str = "When you invoke GCC , it normally does preprocessing, compilation, assembly and linking. The \"overall options\" allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker. Then the output consists of object files output by the assembler.\n\nOther options are passed on to one stage of processing. Some options control the preprocessor and others the compiler itself. Yet other options control the assembler and linker; most of these are not documented here, since you rarely need to use any of them.\n\nMost of the command line options that you can use with GCC are useful for C programs; when an option is only useful with another language (usually C ++ ), the explanation says so explicitly. If the description for a particular option does not mention a source language, you can use that option with all supported languages.\n\nThe gcc program accepts options and file names as operands. Many options have multi-letter names; therefore multiple single-letter options may not be grouped: -dv is very different from -d -v.\n\nYou can mix options and other arguments. For the most part, the order you use doesn't matter. Order does matter when you use several options of the same kind; for example, if you specify -L more than once, the directories are searched in the order specified. Also, the placement of the -l option is significant.\n\nMany options have long names starting with -f or with -W---for example, -fmove-loop-invariants, -Wformat and so on. Most of these have both positive and negative forms; the negative form of -ffoo would be -fno-foo. This manual documents only one of these two forms, whichever one is not the default.\n";

	/* QA Review, task 0 */
	/* len = _printf("Let's print a simple sentence.\n"); */
	/* len2 = printf("Let's print a simple sentence.\n"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("%c", 'S'), _printf("\n"); */
	/* len2 = printf("%c", 'S'), printf("\n"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("A char inside a sentence: %c. Did it work?\n", 'F'); */
	/* len2 = printf("A char inside a sentence: %c. Did it work?\n", 'F'); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48); */
	/* len2 = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("%s", "This sentence is retrieved from va_args!\n"); */
	/* len2 = printf("%s", "This sentence is retrieved from va_args!\n"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know"); */
	/* len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0); */
	/* len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("%c%cth %s%s a%cg%s: You %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "know", 't', ", Jon", '\n'); */
	/* len2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n'); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("%%"), _printf("\n"); */
	/* len2 = printf("%%"), printf("\n"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("Should print a single percent sign: %%\n"); */
	/* len2 = printf("Should print a single percent sign: %%\n"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n'); */
	/* len2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n'); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("css%ccs%scscscs", 'T', "Test"), _printf("\n"); */
	/* len2 = printf("css%ccs%scscscs", 'T', "Test"), printf("\n"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf(str); */
	/* len2 = printf(str); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("man gcc:\n%s", str); */
	/* len2 = printf("man gcc:\n%s", str); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf(NULL), _printf("\n"); */
	/* len2 = printf(NULL), printf("\n"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("%c", '\0'), _printf("\n"); */
	/* len2 = printf("%c", '\0'), printf("\n"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("%"), _printf("\n"); */
	/* len2 = printf("%"), printf("\n"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("%!\n"); */
	/* len2 = printf("%!\n"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */
	/* len = _printf("%K\n"); */
	/* len2 = printf("%K\n"); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */

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
	/* _printf("Mine %.*ld", 40, 1024L); */
	/* printf("Orig %.*ld", 40, 1024L); */
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
	/* _printf("%h\n"); */
	/* _printf("%l\n"); */

	/* Flags */
	/* len2 = _printf("%5c\n", 78); */
	/* printf("Len 1 = %d, Len 2 = %d\n", len, len2); */

	/* Precision - CHECK */
	/* _printf("%.20i\n", -102498402); */
	/* printf("%.20i\n", -102498402); */
	/* _printf("%.20u\n", 102498402); */
	/* printf("%.20u\n", 102498402); */
	/* _printf("%.20x\n", 102498402); */
	/* printf("%.20x\n", 102498402); */
	/* _printf("%.20X\n", 102498402); */
	/* printf("%.20X\n", 102498402); */
	/* _printf("%.20o\n", 102498402); */
	/* printf("%.20o\n", 102498402); */
	/* _printf("%.*sblabla\n", 0, "Hola"); */
	/* printf("%.*sblabla\n", 0, "Hola"); */
	/* _printf("%.*sblabla\n", 2, "Hola"); */
	/* printf("%.*sblabla\n", 2, "Hola"); */
	/* _printf("%.*i", 0, 0); */
	/* printf("%.*i", 0, 0); */
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
