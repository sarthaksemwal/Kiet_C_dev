#include<stdio.h>


/*Write a function swap that takes
two integer poiners as parameters and swaps the values they point to.*/
void swap(int *a,int *b);
int main(){

int a=10,  b=20;

printf("The value without swapping of a,b is: %d %d",a,b);
swap(&a,&b);

printf("\nThe value after swapping of a,b is: %d %d",a,b);






    return 0;
}

void swap (int *a, int *b){

    int temp=*a;
    *a=*b;
    *b=temp;
}