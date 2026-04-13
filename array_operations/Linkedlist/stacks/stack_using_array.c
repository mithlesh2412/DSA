#include <stdio.h>
#include <stdlib.h>
#define N 5


int stack[N];  // global stack array
int top = -1;  // global top pointer

// Push function
void push() {
    int item;
    if (top == N - 1) {
        printf("Stack Overflow!!\n");
    } else {
        printf("Enter element to push: ");
        scanf("%d", &item);
        top++;
        stack[top] = item;
        printf("%d pushed to stack\n", item);
    }
}

// Pop function
void pop() {
    if (top == -1) {
        printf("Stack Underflow!!\n");
    } else {
        int item = stack[top];
        top--;
        printf("%d is the popped element\n", item);
    }
}

// Display function
void display() {
    if (top == -1) {
        printf("Stack is empty!!\n");
    } else {
        printf("Stack elements are: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
printf("Mithlesh Paswan 240010130087\n");

    int choice;
    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n2. Pop\n3. Display\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 0: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}