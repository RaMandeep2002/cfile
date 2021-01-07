/*
In this code we have to calculate the simple interest.
*/
#include <stdio.h>

int main()
{
    float principle, rate, sinterest;
    int time;

    printf("Enter principle amount, rate %% per anum and time\n");
    scanf("%f %f %d", &principle, &rate, &time);

    // here we apply the formula
    sinterest = (principle * rate * time) / 100.0;

    printf("Principle Amount = %5.2f\n", principle);
    printf("Rate %% per annum = %5.2f\n", rate);
    printf("Time = %d years \n", time);
    printf("Simple interset = %5.2f\n", sinterest);
    return 0;
}