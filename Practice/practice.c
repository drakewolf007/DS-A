//Program to swap two numbers and to print origianl and swapped numbers
#include<stdio.h>

int main(){

    int x,y,z;
    printf("\n Enter the value for x: \n");
    scanf("%d",&x);
    printf("\n The value of x is : %d\n", x);

    printf("\n Enter the value for y : \n");
    scanf("%d", &y);
    printf("\n The value of y is : %d\n", y);

    //swapping 
    z=x;
    x=y;
    y=z;

    printf("\n The swapped number is x = %d and y = %d \n", x,y);
    return 0;
}