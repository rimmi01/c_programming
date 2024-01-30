#include <stdio.h>

int main(){
    float radius = 5;
    float pi = 3.14;
    float area = pi * radius * radius;
    scanf("The area of the circle is: %f\n", &radius);
    printf("The area of the circle is: %f\n", area);
    return 0;
}