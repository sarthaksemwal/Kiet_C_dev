#include<stdio.h>
#include<string.h>
int main(){
    char str1[50],str2[50];
    int i=0,len;

    printf("Enter the first string : ");
    scanf("%[^\n]%*c", str1);
     printf("Enter the second string : ");
    scanf("%[^\n]%*c", str2);
    
    len=strlen(str1);

    
    while(str1[i]&&str2[i]){
        str1[len]=str2[i];
        i++;
        len++;
        }
        str1[len]='\0';

    printf("The new string is :");
     printf("%s", str1);





    return 0;
}