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
        return (0);
}
