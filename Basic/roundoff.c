#include<stdio.h>
int main(){
    float number;
    int roundno;
    printf("Enter the no:");
    scanf("%f",&number);
    if(number>=0){
        roundno=(int)(number+0.5);

    }
    else{
        roundno=(int)(number-0.5);
    }
    printf("The no after the round off:%d",roundno);

    return 0;
}