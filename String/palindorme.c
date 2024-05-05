#include<stdio.h>
#include<string.h>
int main(){

int i=0,l,flag=0;
char a[50];
printf("Enter the string :");
scanf(" %[^\n]%*c",a);
l=strlen(a);
while(i<l/2){
    if(a[i]!=a[l-1]){
        flag=1;
        break;



    }
    else{
        i++;
        l--;
    }
}
if(flag==1){
    printf("Not palindrome");

}
else{
    printf("Palindrome");
}







    return 0;
}