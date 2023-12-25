#include<stdio.h>
int main(){
    int num1,num2,result;
    char operator;

    printf("Enter the first no :");
    scanf("%d",&num1);
    printf("Enter the second no :");
    scanf("%d",&num2);
    printf("Enter the operation (+,-,*,/) :");
    scanf(" %c",&operator);
    switch(operator){
        case '+':
        result=num1+num2;
        break;
        case '-':
        result=num1-num2;
        break;
        case '*':
        result=num1*num2;
        break;
        case '/':
        if(num2==0){
        printf("Error!cannot divide by zero\n");
        return 1;
        }
        result=num1/num2;
        break;
        default:
        printf("Invalid Operation please recheck\n");
        return 1;

    }

    printf("The result of %d %c %d is %d ",num1,operator,num2,result);
    return 0;
}