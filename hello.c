#include <stdio.h>

int main()
{
    // printf("Hello, World!\n");
    // int x = 5;
    // int y = 6;
    // printf("%d", x * y);
    // printf(\n);
    // printf("Hello World \b\bin\a the hell\n");
    // \n is used to send control to the new line
    // printf("\\n is used to change the line\n");

    // printf(\n);

    // int x;
    // x = 7;
    // x = x + 5;
    // printf("%d", x);
    // printf("\n");
    int x = 247;
    int y = 6564;
    long int z = 54648965465466;

    // printf("The value of x is: %d\n The value of y is: %d\n", x, y);
    // printf("The value of z is: %ld\n", z);
    char c = '\n';
    char d = 115; // 101 is the aasci value of e
    // 115 is the aasci value of s
    char e = 152165; // aasci value range is less than this, in between -126 to +128
    // printf("%d\n", c);
    // printf("%c\n", d);
    // printf("%c\n", e);
    ///////////////////*******************///////////////////
    float f = 3.656516546313566; // float will print till 6 digits of precession after the decimal, as it has the capacity till 6 digits only by default
    // printf("%.12f\n", f);

    double g = 3.6546231654531346464;
    // printf("%.14lf\n", g);
    // printf("%.14f\n", g);  //why same both of them

    // printf("%.12f\n", x);  //don't understood

    int h = 0760;
    // printf("%d\n", h);  //We have assigned the value in octal format, but its not running
    // but it will run only when, we use %d for printing
    // printf("%o\n", h);  //%o is used for octa decimal numbers

    int j = 0X45A67D;
    // printf("%d\n", j);
    // printf("%X\n", j);
    // printf("%D\n", j);
    // printf("%p\n", j);   //all lower case

    unsigned int k = -4666656;
    // printf("%u\n", k); // what is this, output, I don't know

    

    return 0;
}

// int main(int argc, char const *argv[])
// {
//     /* code */
//     return 0;
// }

// void main(){
//     pirntf();
//     return 0;
// }