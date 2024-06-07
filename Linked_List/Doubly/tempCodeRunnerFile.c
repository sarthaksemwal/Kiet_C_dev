#include<stdio.h>
// #include<stdlib.h>

// struct node{
//     struct node* prev;
//     int data;
//     struct node* next;
// };
// int main(){


// struct node* head=NULL;
// struct node* tail=NULL;
// head=beg(&head,&tail,10);
// printf("The data inside the node is :%d",head->data);



//     return 0;
// }

// struct node* beg(struct node** head,struct node** tail,int info){
//     struct node* ptr;
//     ptr=(struct node*)malloc(sizeof(struct node));
//     ptr->prev=NULL;
//     ptr->next=NULL;
//     ptr->data=info;
//     if(*head==NULL){
//         *head=ptr;
//         *tail=ptr;
//     }
//     else{
//         ptr->next=*head;
//         (*head)->prev=ptr;
//         *head=ptr;
//     }
// return *head;

// }