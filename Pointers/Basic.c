#include<stdio.h>
int main(){
    


    //initiazed a variable
    int x=0;

    //initilized a pointer 
    int *ptr;

    //storing the address of the x variable inside the ptr
    ptr=&x;

    //priting the value and the address using the pointer 
    printf("The address of x is : %d",ptr);
    printf("The value of x is : %d",*ptr);



    return 0;
}