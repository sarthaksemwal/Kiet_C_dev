#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* insert(int data,struct node** head);

void traverse(struct node** head);


int main(){
    struct node* head=NULL;
    head=insert(10,&head);
    insert(20,&head);
    insert(50,&head);
    traverse(&head);
    


    return 0;
}

 struct node* insert(int info,struct node** head){
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=info;
    if(*head==NULL){
        *head=ptr;
        ptr->next=NULL;

    }

    else{

        ptr->next=*head;
        *head=ptr;
    }

    return *head;
}


void traverse(struct node** head){
    struct node* loc=*head;
    int count=1;
    while(loc!=NULL){
        printf("THE VALUE INSIDE THE %d NODE IS :%d\n",count,loc->data);
        loc=loc->next;
            count++;
    }
    

}





