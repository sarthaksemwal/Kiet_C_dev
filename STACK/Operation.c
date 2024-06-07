#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};


struct node* Push(int info,struct node** head);
int Pop(struct node** head);

int main(){

    int choice,item,PopItem;
    struct node* head=NULL;
    while (1) {
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            printf("Enter the item to be inserted:");
            scanf("%d",&item);
            Push(item,&head);

                
                break;
            case 2:
                PopItem=Pop(&head);
                printf("Item Deleted is %d\n",PopItem);
                break;
            default:
                printf("invalid choice\n");
                break;
        }
    }





    return 0;
}



struct node* Push(int info,struct node** head){
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->data=info;
    ptr->next=NULL;
    if(*head==NULL){
        *head=ptr;
    }
    else{

        ptr->next=*head;
        *head=ptr;


    }

    return *head;
}



int Pop(struct node** head){
    struct node* loc;
    int item;
    if(*head==NULL){
        exit(0);
    }


    else{
        loc=*head;
        item=loc->data;
        *head=loc->next;
        free(loc);


        
    }

    return item;
}