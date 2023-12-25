#include<stdio.h>
int main(){
int num;
int digit=0;
int sum=0;
int i;
printf("Enter the no:");
scanf("%d",&num);
while(num>0){
    digit=num%10;
    sum=sum*10+digit;
    num=num/10;
    i++;
}
printf("%d",sum);
    return 0;
}