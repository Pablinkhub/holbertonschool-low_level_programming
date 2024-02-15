#include <stdio.h>
/**
* main - "Descripción generica"
*
* Return: "Algo que devuelve"
*/
int main(void)
{
	char Char;
	int Int;
	long int LongInt;
	long long int LongLongInt;
	float Float;
		printf("Size of a char: %zu byte(s)\n", sizeof(Char));
		printf("Size of an int: %zu byte(s)\n", sizeof(Int));
		printf("Size of a long int: %zu byte(s)\n", sizeof(LongInt));
		printf("Size of a long long int: %zu byte(s)\n", sizeof(LongLongInt));
		printf("Size of a float: %zu byte(s)\n", sizeof(Float));
		 UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
#advanced
Score: 0.00% (Checks completed: 0.00%)
Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
Your program should return 1
Your program should compile without any warnings when using the -Wall gcc option
julien@ubuntu:~/c/$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
julien@ubuntu:~/c/$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/$ echo $?
1
julien@ubuntu:~/c/$ ./quote 2> q
julien@ubuntu:~/c/$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/$ grep printf < 101-quote.c
julien@ubuntu:~/c/$ grep put < 101-quote.c
julien@ubuntu:~/c/$ return (0);
}
