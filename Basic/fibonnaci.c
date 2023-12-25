#include<stdio.h>
int main(){
    int a=0;
    int b=1;
    int c;
    int range=13;
    int i=1;

    while(i<range){
        printf("\n%d",a);
        c=a+b;
        a=b;
        b=c;
        i++;


    }



    return 0;
}