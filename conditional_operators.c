#include <stdio.h>
int main(){
    // int age = 23;
    // printf(age <= 18 ? "Not Allowed" : "Allowed");

    int m1=23, m2=45, m3=89, m4=78;
    float marks = ((m1+m2+m3+m4)/400.0)*100.0;
    marks < 40 ? printf( "Fail") : printf("%f", marks); // taking float is important

    int age = 23;
    printf(age < 15 ? "price: 500\nage: %d": age > 40 ? "price: 1000\nage: %d" : "price: 2000\nage: %d");
    return 0;
}