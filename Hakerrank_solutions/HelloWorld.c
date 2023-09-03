 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    //string s
    char s[100];
    // taking sentence as a input ex: Life is beautiful
    scanf("%[^\n]%*c", &s);
    //output
    printf("Hello, World!\n");
    printf(s);  
    return 0;
}
