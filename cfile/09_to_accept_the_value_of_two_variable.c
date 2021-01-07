/*
In this code we have swaping of two number.
*/
#include <stdio.h>

int main()
{
    int a = 10, b = 20, temp;
    printf("Before swaping the number a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swaping the number a = %d, b = %d", a, b);
    return 0;
}