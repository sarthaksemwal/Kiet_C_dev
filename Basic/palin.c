#include<stdio.h>
int main(){
    int n=123;
    int digit=0;
    int rev=0;
    int new=n;
    while(n>0){
        digit=n%10;
        rev=rev*10+digit;
        n/=10;

    }
    printf("%d",rev);
}