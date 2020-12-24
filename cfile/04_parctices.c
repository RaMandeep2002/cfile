// Here is the header file
// stdio is stand for standand input and output header.
#include <stdio.h>

int main()
{
    //here we have take two variabe
    int number, squ;
    printf("Enter a number to get a square:- ");
    scanf("%d", &number);
    //here is the calculation
    squ = number * number;
    //here is the output
    printf("Here is the square of the enter number %d = %d", number, squ);
    return 0;
}
