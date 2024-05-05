#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* next;
};

// struct node* CreateNode(int info);
struct node* InsertionBeg( struct node** head,int info);

int main(){
   int count=1;
    struct node* head;

    head=InsertionBeg(&head,20);
    head=InsertionBeg(&head,220);
    head=InsertionBeg(&head,30);

  
  while(head!=NULL){

    printf("The value of %d node is %d\n",count,head->data);
    head=head->next;
    count++;

  }
    




}




struct node* InsertionBeg( struct node** head,int info){

    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->data=info;
    if(head==NULL)
    ptr->next=NULL;
    else
    ptr->next=*head;
    return ptr;

}