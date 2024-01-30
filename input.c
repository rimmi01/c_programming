#include <stdio.h>

int main(){
    // int x = 5;
    // printf("%d", &x);    //this &x in the printf is the variable of x.
    int x, y;
    printf("Enter the values of x and y");
    scanf("%d%d", &x, &y);
    printf("x = %d y = %d", x, y);
    return 0;
}