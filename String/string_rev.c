
#include <stdio.h>
#include<string.h>
int main()
{
    
    char str[50];
    int i,len;
    char temp;
    printf("Enter the string:");
    scanf("%[^\n]%*c", str);
    len=strlen(str);
    printf("The length of the string is :%d",len);
    for(i=0;i<len/2;i++){
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
        
    }
     printf("\nThe reverse of the string is :");
     printf("%s", str);
   

    return 0;
}