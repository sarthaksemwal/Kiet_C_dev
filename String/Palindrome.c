#include<stdio.h>
#include<string.h>
int main(){

    char a[50];
    int i,len,flag=0;
    printf("Enter the string:");
    scanf("%[^\n]%*c", a);
    len=strlen(a);
    
    for(i=0;i<len/2;i++){
        if(a[i]==a[len-1-i]){
            flag=1;
        }
        else{
            flag=0;
            break;
        }


    }

    if(flag==1){

        printf("The string is palindrome");
    }
    else{
        printf("The string is not palindrome");
    }
    







    return 0;

}