// Here is the header file
// stdio is stand for standand input and output header.
#include <stdio.h>

int main()
{
    //here i declare the variable num1, num2, num3.
    int num1, num2, num3;
    //here i declare the variable float as avg
    //because the averge is the point value
    float avg;
    printf("Enter the three number which you have get the avg:- ");
    scanf("%d %d %d", &num1, &num2, &num3);
    //here is the calculation of the averge.
    avg = (num1 + num2 + num3) / 3;
    //here is the output
    printf("\nAverage: %f", avg);
    return 0;
}
