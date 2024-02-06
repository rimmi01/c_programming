#include<stdio.h>

int main(){
    // int x = 5;
    // printf("%p", &x); // format specifier for address is %p, the address will be 64 bit means 8 bytes long
    // every byte have a specific address in memory
    // printf("%d"); // if we don't give any variable, then it will give some random value


    // printf("%d", 2+3*5);


    // ********function call******//
    // printf("%d", sizeof(int));  // sizeof function is the number of bytes the memory is containing for ()
    // printf("%d", sizeof(long int));  // size
    // float y;
    // printf("%d", sizeof(y));
    // printf("%d", sizeof(double));
    // printf("%d", sizeof(void));  // it's(void) using as a written type in memeory
    // printf("%d", 5<6);  //output will be 1, if the codition is true and for false it's 0


    // int x = 567;
    // printf("%d", !x);



    // int x = -5, y = 7;  // binary5 = 101, binary7 = 111, binary mein solve hoga, then convert it to number
    // printf("%d", x |y);

    // int x = -8;
    // printf("%d", ~x);  // resultant value is x+1 and then, complementing the sign2

    int x = 12;
    printf("%d", x>>2 );
    // how to convert binary number to 2S compliment

    return 0;
}