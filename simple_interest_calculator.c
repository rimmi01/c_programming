#include <stdio.h>

int main()
{
    float principle, rate, time, si;
    printf("Enter principle: ");
    scanf("%f", &principle);
    printf("Enter Rate: ");
    scanf("%f", &rate);
    printf("Enter time: ");
    scanf("%f", &time);
    si = (principle * rate * time) / 100;
    // scanf("The simple interest is: %f\n", &p, &r, &t);
    // printf("The simple interest is: %f\n", si);
    printf("%f\n", si);
    return 0;
}