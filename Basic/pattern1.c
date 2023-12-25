#include<stdio.h>
int main(){
    int row=5;
    int j;
    int i;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}