#include<stdio.h>
int main(){
    int day;
    printf("Enter the day:");
    scanf("%d",&day);
    switch(day){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesda");
        break;
        case 4:
        printf("Thrusday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Wrong input!");
    }
    return 0;

}