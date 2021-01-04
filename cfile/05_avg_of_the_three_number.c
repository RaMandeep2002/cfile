/*
Here is the code of to get the averge of three number.
*/
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    float average;
    printf("Enter the three number :\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    average = (num1 + num2 + num3) / 3;

    printf("The average of the number is : %d", average);

    return 0;
}