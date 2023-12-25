#include<stdio.h>
int main(){

    //declaring the var
    float number;
    int roundno;
    //taking the user input
    printf("Enter the no:");
    scanf("%f",&number);
    //logic for the positive int
    if(number>=0){
        roundno=(int)(number+0.5);

    }
    //logic for negetive int 
    else{
        roundno=(int)(number-0.5);
    }
    printf("The no after the round off:%d",roundno);

    return 0;
}