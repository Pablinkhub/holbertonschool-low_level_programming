#include <stdio.h>
/**
* main - "Descripción generica"
*
* Return: "Algo que devuelve"
*/
int main(void)
{	
 char aChar;
 int anInt;
 long int aLongInt;
 long long int aLongLongInt;
 float aFloat;
    printf("Size of a char: %zu byte(s)\n", sizeof(aChar));
    printf("Size of an int: %zu byte(s)\n", sizeof(anInt));
    printf("Size of a long int: %zu byte(s)\n", sizeof(aLongInt));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(aLongLongInt));
    printf("Size of a float: %zu byte(s)\n", sizeof(aFloat));
        return (0);
}
