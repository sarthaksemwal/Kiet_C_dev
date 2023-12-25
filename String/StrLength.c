#include<stdio.h>

int main(){

    char str[50];
    int i;
    printf("Enter the string :");
    scanf("%[^\n]%*c", str);
    for(i=0;str[i];i++);
    printf("The lenght of the string is :%d",i);
    return 0;
}