/*
In this code we have to compute quotient and reminder.
*/
#include <stdio.h>

int main()
{
    int dividend, divisor, quotient, reminder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;

    reminder = dividend % divisor;

    printf("quotient : %d\n", quotient);
    printf("reminder : %d\n", reminder);
    return 0;
}