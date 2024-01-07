#include<stdio.h>

//wap to increment the value using the refrence 

int main (){

    int a;
    int *ptr;
    
    printf("Enter a value :");
    scanf("%d",&a);
    ptr=&a;

    ++*ptr;
    printf("The value after the increment is : %d",a);
    return 0;




}