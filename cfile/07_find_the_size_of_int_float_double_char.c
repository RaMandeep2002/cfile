/*
In this code we find the size of datatypes
like int, char, double, float.
*/
#include <stdio.h>

int main()
{
    int intType;
    float floarType;
    double doubleType;
    char charType;

    // size of evaluates the size of a variable
    printf("Size of the int : %zu bytes\n", sizeof(intType));
    printf("Size of the float: %zu bytes\n", sizeof(floarType));
    printf("Size of the double: %zu bytes\n", sizeof(doubleType));
    printf("Size of the char : %zu bytes\n", sizeof(charType));
    return 0;
}