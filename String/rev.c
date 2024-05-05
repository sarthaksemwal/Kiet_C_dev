#include<stdio.h>
#include<string.h>
int main(){

int i=0,l,j;
char a[50];
printf("Enter the first string :");
scanf(" %[^\n]%*c",a);
l=strlen(a);
j=l-1;
while(i<l/2){
    char temp=a[j];
    a[j]=a[i];
    a[i]=temp;
    i++;
    j--;
}
printf("The string after the reverse is : %s",a);










    return 0;
}