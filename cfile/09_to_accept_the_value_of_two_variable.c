// /*
// In this code we have swaping of two number.
// */
// #include <stdio.h>

// int main()
// {
//     int a = 10, b = 20, temp;
//     printf("Before swaping the number a = %d, b = %d\n", a, b);
//     temp = a;
//     a = b;
//     b = temp;
//     printf("After swaping the number a = %d, b = %d", a, b);
//     return 0;
// }

/*
In the code we have swaping of two number when user enter a number
*/
#include <stdio.h>

int main()
{
    int first, second, temp;
    printf("Enter the first number: \n");
    scanf("%d", &first);
    printf("Enter the second number: \n");
    scanf("%d", &second);

    // value of the first is assigned to temp
    temp = first;

    //value of second is assigned to first
    first = second;

    //value of temp (inital value of first) is assigned to second
    second = temp;

    printf("\nAfter swaping , first number = %d\n", first);
    printf("After swaping , second number = %d", second);
    return 0;
}
