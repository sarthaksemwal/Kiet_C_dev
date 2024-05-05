#include<stdio.h>
#include<string.h>
int main(){

int i=0,l,l2;
char a[50];
char b[50];
printf("Enter the first string :");
scanf(" %[^\n]%*c",a);
printf("Enter the second string :");
scanf(" %[^\n]%*c",b);
l=strlen(a);
l2=l-1;
while(b[i]!='\0'){
    a[l2]=b[i];
    i++;
    l2++;
}
a[l2]='\0';

printf("The string after the concat is :");
printf("%s",a);









    return 0;
}