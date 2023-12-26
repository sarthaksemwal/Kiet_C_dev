#include<stdio.h>
int main(){

    char a[50];
    char b[50];
    int i=0;
    printf("Enter the string :");
    scanf("%[^\n]%*c", a);
    while(a[i]!='\0'){
        b[i]=a[i];
        i++;
    }
    b[i]='\0';

    printf("The copied string to another string is : %s",b);




    return 0;
}