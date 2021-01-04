/*
Here is the code to get the square of the given number
*/
#include <stdio.h>

int main()
{
    int number, squ;
    printf("Enter the number which you get the square: -");
    scanf("%d", &number);

    squ = number * number;

    printf("Here is the square of the enter number %d= %d", number, squ);
    return 0;
}