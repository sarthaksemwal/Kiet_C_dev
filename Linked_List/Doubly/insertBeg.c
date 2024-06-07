#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
};

struct node* end(struct node** head,struct node** tail,int info);
struct node* after(struct node** head,int val,struct node** tail,int info);


int main(){


struct node* head=NULL;
struct node* tail=NULL;
struct node* loc;
head=end(&head,&tail,10);
end(&head,&tail,20);
end(&head,&tail,220);
after(&head,20,&tail,200);

loc=head;
while(loc!=NULL){
printf("The data inside the node is :%d\n",loc->data);
loc=loc->next;

}

    return 0;
}




struct node* end(struct node** head,struct node** tail,int info){

    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=info;
    ptr->prev=NULL;
    ptr->next=NULL;

    if(*head==NULL){
        *head=*tail=ptr;
    }

    else{
        ptr->prev=*tail;
        (*tail)->next=ptr;
        *tail=ptr;
    }
    return *head;
}


struct node* after(struct node** head,int val,struct node** tail,int info){
    struct node* loc;
    struct node* ptr;
    loc=*head;
    ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->data=info;
    ptr->prev=NULL;
    ptr->next=NULL;
    if(head==NULL){
        *head=*tail=NULL;

    }
    else{
        while(loc!=NULL){
            if(loc->data==val){
                break;

            }
            loc=loc->next;
        }

        if(*head==NULL){
            *head=*tail=ptr;
        }
        else{
            loc->next=ptr->next;
            ptr->next=loc->next->prev;
            loc->next=ptr;
            ptr->prev=loc;
        }
            
    }

    return *head;


}







