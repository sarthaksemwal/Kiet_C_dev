#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    char b[50];
    int i=0;
    int flag=0,len1,len2;
    
    printf("Enter the first string :");
    scanf("%[^\n]%*c", a);
     printf("Enter the second string :");
    scanf("%[^\n]%*c", b);
    len1=strlen(a);
    len2=strlen(b);
    while (a[i]!='\0' && b[i]!='\0'){
        if(len1==len2){

            if(a[i]==b[i]){
            flag=1;
            }

        
        else{
            flag=0;
            break;
        }
        }
        i++;




        }
        if(flag==1){
            printf("String is equal");
        }
        else{
            printf("The string is not equal");
        }


  return 0;

    }
  