#include<stdio.h>
#include<string.h>
int main(){

int i=0,l,l2,flag=0;
char a[50];
char b[50];
printf("Enter the first string :");
scanf(" %[^\n]%*c",a);
printf("Enter the second string :");
scanf(" %[^\n]%*c",b);
l=strlen(a);
l2=strlen(b);
while(a[i] && b[i]){
    if(l!=l2){
        flag=1;
        break;
    }
    else{
        if(a[i]==b[i]){
            flag=0;
        }
        else{
            flag=1;
            break;
        }
    }
    i++;
}

if(flag==1){
    printf("Two string are not equal");
}

else{
    printf("Equal");
}









    return 0;
}