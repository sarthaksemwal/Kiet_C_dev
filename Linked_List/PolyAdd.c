#include<stdio.h>
#include<stdlib.h>


struct node {
    int coff;
    int pow;
    struct node* next;
};

int main(){

    int choice;

    struct node* poly1=NULL;
    struct node* poly2=NULL;
    struct node* poly3=NULL;

    printf("Enter your Choice:");
    scanf("%d",&choice);

    while(1){

        switch (choice)
        {
        case 1:createPoly(&poly1);
            break;

        case 2:createPoly(&poly2);
            break;

        case 3:addPoly(poly1,poly2,&poly3);
            break;

        case 4:exit(0);

        default:printf("Enter the correct choice!!");
            break;
        }

        printf("Enter your Choice:");
        scanf("%d",&choice);
    }

    return 0;
}

void createPoly(struct node** poly){

    struct node*ptr;
    int c,p;
    scanf("%d%d",&c,&p);
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->coff=c;
    ptr->pow=p;
    if(*poly==NULL){
        ptr->next=NULL;
        *poly=ptr;
    }
    else{
        ptr->next=*poly;
        *poly=ptr;
    }
}

void addPoly(struct node* poly1, struct node* poly2, struct node** poly3){

    struct node* temp1 = poly1;
    struct node* temp2 = poly2;
    struct node* temp3 = NULL;

    while(temp1!= NULL && temp2!= NULL){

        if(temp1->pow > temp2->pow){
            temp3 = (struct node*)malloc(sizeof(struct node));
            temp3->coff = temp1->coff;
            temp3->pow = temp1->pow;
            temp3->next = *poly3;
            *poly3 = temp3;
            temp1 = temp1->next;
        }
        else if(temp1->pow < temp2->pow){
            temp3 = (struct node*)malloc(sizeof(struct node));
            temp3->coff = temp2->coff;
            temp3->pow = temp2->pow;
            temp3->next = *poly3;
            *poly3 = temp3;
            temp2 = temp2->next;
        }
        else{
            temp3 = (struct node*)malloc(sizeof(struct node));
            temp3->coff = temp1->coff + temp2->coff;
            temp3->pow = temp1->pow;
            temp3->next = *poly3;
            *poly3 = temp3;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    while(temp1!= NULL){
        temp3 = (struct node*)malloc(sizeof(struct node));
        temp3->coff = temp1->coff;
        temp3->pow = temp1->pow;
        temp3->next = *poly3;
        *poly3 = temp3;
        temp1 = temp1->next;
    }

    while(temp2!= NULL){
        temp3 = (struct node*)malloc(sizeof(struct node));
        temp3->coff = temp2->coff;
        temp3->pow = temp2->pow;
        temp3->next = *poly3;
        *poly3 = temp3;
        temp2 = temp2->next;
    }
}
    

