#include<stdio.h>
int main(){

    char c[10];
    int i;
    printf("Enter the char:");
    for(i=0;i<10;i++){
        scanf("%c",c[i]);
    }

    printf("The string you entered is");
    for(i=0;i<10;i++){
        printf("%c",c[i]);
    }
    

    
    return 0;


}