#include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node *next;
};
int main() {
 struct node *head = NULL, *newnode, *temp;
 int n, value;
 printf("Mithlesh Paswan 240010130087\n");
 printf("Enter number of nodes: ");
 scanf("%d", &n);
 for (int i = 0; i < n; i++) {
 newnode = (struct node*)malloc(sizeof(struct node));
 printf("Enter data for node %d: ", i + 1);
 scanf("%d", &newnode->data);
 newnode->next = NULL;
 if (head == NULL) {
 head = temp = newnode;
 } else {
 temp->next = newnode;
 temp = newnode;
 }
 }
 printf("Enter value to insert at beginning: ");
 scanf("%d", &value);
 newnode = (struct node*)malloc(sizeof(struct node));
 newnode->data = value;
 newnode->next = head;
 head = newnode;
 printf("Linked list after insertion at beginning:\n");
 temp = head;
 while (temp != NULL) {
 printf("%d ", temp->data);
 temp = temp->next;
 }
 printf("\n");
 return 0;
}