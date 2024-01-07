#include<stdio.h>



/*
Declare two integer variables, a and b. Declare a pointer p and 
assign the address of a to p. Change the value of a through the pointer.

*/
int main(){

int a=10, b=0;

int *ptr;
ptr=&a;
*ptr=20;

printf("The value inside a is %d",*ptr);
printf("\nThe value inside b is %d",b);




    return 0;
}