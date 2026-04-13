#include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node *next;
};
int main() {
 struct node *head = NULL, *temp, *newnode;
 int n, pos, value;
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
 printf("Enter position to insert new node : ");
 scanf("%d", &pos);
 printf("Enter value to insert: ");
 scanf("%d", &value);
 newnode = (struct node*)malloc(sizeof(struct node));
 newnode->data = value;
 if (pos == 1) {
 newnode->next = head;
 head = newnode;
 } else {
 temp = head;
 for (int i = 1; i < pos - 1 && temp != NULL; i++) {
 temp = temp->next;
 }
 if (temp == NULL) {
 printf("Invalid position!\n");
 } else {
 newnode->next = temp->next;
 temp->next = newnode;
 }
 }
 printf("Linked list after insertion:\n");
 temp = head;
 while (temp != NULL) {
 printf("%d ", temp->data);
 temp = temp->next;
 }
 printf("\n");
 return 0;
}