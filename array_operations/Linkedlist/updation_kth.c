#include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node *next;
};
int main() {
 struct node *head = NULL, *temp, *newnode;
 int n, i, position, newValue, count = 0;
 printf("Mithlesh Paswan 240010130087\n");
 printf("Enter number of nodes: ");
 scanf("%d", &n);
 for (i = 0; i < n; i++) {
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
 printf("\nOriginal Linked List:\n");
 temp = head;
 while (temp != NULL) {
 printf("%d ", temp->data);
 temp = temp->next;
 count++;
 }
 printf("\n");
 printf("\nEnter the position to update (1 to %d): ", count);
 scanf("%d", &position);
 if (position < 1 || position > count) {
 printf("Invalid position!\n");
 return 0;
 }
 printf("Enter the new value: ");
 scanf("%d", &newValue);
 temp = head;
 for (i = 1; i < position; i++) {
 temp = temp->next;
 }
 temp->data = newValue;
 printf("\nLinked List after updation at position %d:\n", position);
 temp = head;
 while (temp != NULL) {
 printf("%d ", temp->data);
 temp = temp->next;
 }
 printf("\n");
 return 0;
}