#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("the given stack is full cannot able to to push values %d\n", value);
    }
    else {
        stack[++top] = value;
        printf("Pushed %d value onto the stack\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack doesnot contain anything cannot able to pop the element\n");
    }
    else {
        printf("Popped %d from the stack\n", stack[top--]);
    }
}

void display() {
    if (top == -1) {
        printf("The stack is empty\n");
    }
    else {
        printf("Stack elements are: ");

        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;
    while (1) {
        printf("\nChoose an operation:\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
