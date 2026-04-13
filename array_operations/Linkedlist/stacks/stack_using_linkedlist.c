//Mithlesh Paswan
//240010130087
#include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node *next;
};
struct node *top = NULL;
void push(int x) {
 struct node *newnode = (struct node *)malloc(sizeof(struct node));
 if (newnode == NULL) {
 printf("Memory allocation failed\n");
 return;
 }
 newnode->data = x;
 newnode->next = top;
 top = newnode;
 printf("%d pushed to stack\n", x);
}
void pop() {
 if (top == NULL) {
 printf("Stack Underflow\n");
 } else {
 struct node *temp = top;
 printf("Popped element is %d\n", top->data);
 top = top->next;
 free(temp);
 }
}
void peek() {
 if (top == NULL) {
 printf("Stack is empty\n");
 } else {
 printf("Top element is %d\n", top->data);
 }
}
void display() {
 if (top == NULL) {
 printf("Stack is empty\n");
 } else {
 struct node *temp = top;
 printf("Stack elements:\n");
 while (temp != NULL) {
 printf("%d\n", temp->data);
 temp = temp->next;
 }
 }
}
int main() {
 printf("Mithlesh Paswan 240010130087\n");
 push(1);
 push(2);
 push(3);
 push(4);
 push(5);
 pop();
 pop();
 peek();
 display();
 return 0;
}