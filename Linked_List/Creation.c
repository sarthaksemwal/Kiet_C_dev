#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node* next;
};

int main(){
    int data1=10;
    int data2=20;
    

    //creating the pointer of the type node 
    struct node* head;
    struct node* ptr;

    //allocating the memory for the node
    ptr=( struct node*)malloc(sizeof(struct node));

    //storing the data inside the node
    ptr->data=data1;
    
    //now the head points towards the first node
    head=ptr;
    printf("The data inside the node is %d",(*ptr).data);

    free(ptr);
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data2;
    head=ptr;
    printf("The data inside the node 2 is %d",ptr->data);

    free(ptr);



  return 0;
}