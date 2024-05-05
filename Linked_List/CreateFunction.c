#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

//function defination 

struct node* CreateNode( int data);

int main(){
    struct node* head=CreateNode(10);
   

     struct node* current = head; 
    while (current != NULL) { 
        printf("Data: %d\n", current->data); 
        current = current->next;
    }
    


    return 0;
}


struct node* CreateNode(int info){
    struct node* head;
    struct node* ptr;

    ptr=( struct node*)malloc(sizeof(struct node));
    ptr->data=info;
    head=ptr;
    if(head==NULL)
    ptr->next=NULL;
    else{
        ptr->next=ptr;
    }
    return ptr;

}