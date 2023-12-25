#include<stdio.h>
int main(){

    int num;
    int digit=0;
    int count=0;
    
    printf("Enter the number you want to check for the armstrong:");
    scanf("%d",&num);
    while(num>0){
        digit=num%10;
        num=num/10;
        count++;

    }
    printf("The value of count is %d",count);


    return 0;
}