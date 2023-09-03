#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    //taking the input
    
    char ch;
    scanf("%c",&ch);
    char s[100];
    scanf("%s",&s);
    char sen[100];
    scanf("\n");
    scanf("%[^\n]%*c",&sen);
    
    //printing the code 
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    
       
    return 0;
}
