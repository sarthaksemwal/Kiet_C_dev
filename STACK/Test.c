// #include <stdio.h>
// #include<stdlib.h>
// typedef struct node{
//     int info;
//     struct node *next;
// }node;


// void push(node **top,int item){
//     node *ptr;
//     ptr=(node*)malloc(sizeof(node));
//     ptr->info=item;
//     if(*top==NULL)
//     {
//         *top=ptr;
//         ptr->next=NULL;
//     }
//     else{
//         ptr->next=*top;
//         *top=ptr;
//     }
// }


// int pop(node **top){
//     int item;
//     node *loc;
//     if(*top==NULL){
//         exit(0);
//     }
//     else{
//         item=*top->info;
//         loc=*top;
//         *top=*top->next;
//         free(loc);
//         return(item);
//     }
// }
// void main(){
//     node *top==NULL;
//     int item;
//     int choice;
//     int deleted_item;
//     printf("enter your choice");
//     scanf("%d",&choice);
//     case 1: printf("enter the item");
//             scanf("%d",&item);
//             push(&top,item);
//             break;
//     case 2: deleted_item=pop(&top);
//             break;
//                     }
    
    
    
// }









#include <stdio.h>
#include<stdlib.h>
typedef struct node{
    int info;
    struct node *next;
}node;


void push(node **top,int item){
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=item;
    if(*top==NULL)
    {
        *top=ptr;
        ptr->next=NULL;
    }
    else{
        ptr->next=*top;
        *top=ptr;
    }
}


int pop(node **top){
    int item;
    node *loc;
    if(*top==NULL){
        exit(0);
    }
    else{
        item=(*top)->info; 
        loc=*top;
        *top=(*top)->next;
        free(loc);
        return(item);
    }
}
void main(){
    node *top=NULL; 
    int item;
    int choice;
    int deleted_item;
    printf("enter your choice");
    scanf("%d",&choice);

    while (1)
    {
         switch(choice){
        case 1: printf("enter the item");
                scanf("%d",&item);
                push(&top,item);
                break;
        case 2: deleted_item=pop(&top);
                break;
        default:
                printf("Wrong choice");
                break;
    }
    }
    
   
}