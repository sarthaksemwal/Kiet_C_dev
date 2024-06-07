#include <stdio.h>
#define size 10

void push(int stack[], int item, int *top) {
    if ((*top) == size - 1) {
        printf("overflow\n");
        return;
    }
    (*top)++;
    stack[*top] = item;
    printf("item inserted\n");
}


int pop(int stack[], int *top) {
    int item;

    if ((*top) == -1) {
        printf("underflow\n");
        return -1;
    }
    item = stack[*top];
    (*top)--;
    return item;
}

int main() {
    int stack[size];
    int choice, item;
    int top = -1;

    while (1) {
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (top == size - 1) {
                    printf("overflow\n");
                    break;
                }
                printf("enter the item: ");
                scanf("%d", &item);
                push(stack, item, &top);
                break;
            case 2:
                item = pop(stack, &top);
                if (item != -1) {
                    printf("popped item: %d\n", item);
                }
                break;
            default:
                printf("invalid choice\n");
                break;
        }
    }
    return 0;
}