#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* InsertEnd(struct node** head,int info);

int main(){
    int count;

    struct node* head=NULL;
    InsertEnd(&head,20);
    InsertEnd(&head,30);
    InsertEnd(&head,40);




    while(head!=NULL){

    printf("The value of %d node is %d\n",count,head->data);
    head=head->next;
    count++;

  }
    return 0;
}

struct node* InsertEnd(struct node** head,int info){

    struct node* ptr;
    struct node* loc;
    loc=*head;
    ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->data=info;
    if(head==NULL)
    ptr->next=NULL;
    else{
     while(loc->next!=NULL){
        loc=loc->next;
        loc->next=ptr;


     }
    }
    
    
}