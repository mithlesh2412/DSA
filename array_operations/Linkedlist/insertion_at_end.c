#include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node *next;
};
int main() {
 struct node *head = NULL, *temp, *newnode;
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
 printf("Enter value to insert at the end: ");
 scanf("%d", &value);
 newnode = (struct node*)malloc(sizeof(struct node));
 newnode->data = value;
 newnode->next = NULL;
 if (head == NULL){
 head = newnode;
 } else {
 temp = head;
 while (temp->next != NULL) {
 temp = temp->next;
 }
 temp->next = newnode;
 }
 printf("Linked list after insertion at end:\n");
 temp = head;
 while (temp != NULL) {
 printf("%d ", temp->data);
 temp = temp->next;
 }
 printf("\n");
 return 0;
}