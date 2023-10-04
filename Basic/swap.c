#include<stdio.h>
void main(){

    int a,b,temp;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    temp=b;
    b=a;
    a=temp;
    printf("After swapping value of a %d",a);
    printf("\nAfter swapping value of b %d",b);



}