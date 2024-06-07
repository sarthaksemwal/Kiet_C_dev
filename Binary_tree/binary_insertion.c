#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int info;
    struct node* lchild;
    struct node* rchild;
} node;

void insertion_bst(node** root, int item) {
    node *ptr;
    node *pptr;
    node *loc;
    ptr = (node*)malloc(sizeof(node));
    ptr->info = item;
    ptr->lchild = ptr->rchild = NULL;
    if (*root == NULL)
        *root = ptr;
    else {
        loc = *root;
        pptr = NULL;
        while (loc != NULL) {
            pptr = loc;
            if (loc->info > item)
                loc = loc->lchild;
            else
                loc = loc->rchild;
        }
        if (pptr->info > item)
            pptr->lchild = ptr;
        else
            pptr->rchild = ptr;
    }
}

void inorder_traversal(node *root) {
    if (root != NULL) {
        inorder_traversal(root->lchild);
        printf("%d ", root->info);
        inorder_traversal(root->rchild);
    }
}

int main() {
    int item;
    node* root = NULL;
    char choice;
    
    do {
        printf("Enter the value of item: ");
        scanf("%d", &item);
        insertion_bst(&root, item);
        printf("Do you want to insert another item? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    
    printf("In-order Traversal of the BST: ");
    inorder_traversal(root);
    
    return 0;
}
