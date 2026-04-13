#include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node *next;
};
int main() {
 struct node *head = NULL, *temp, *newnode, *prev;
 int n, i, pos;
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
 }
 printf("\n");
 printf("\nEnter position to delete (1 to %d): ", n);
 scanf("%d", &pos);
 if (pos < 1 || pos > n) {
 printf("Invalid position!\n");
 return 0;
 }
 if (pos == 1) {
 temp = head;
 head = head->next;
 free(temp);
 }
 else {
 temp = head;
 for (i = 1; i < pos; i++) {
 prev = temp;
 temp = temp->next;
 }
 prev->next = temp->next;
 free(temp);
 }
 printf("\nLinked List after deletion:\n");
 temp = head;
 if (head == NULL) {
 printf("List is empty");
 } else {
 while (temp != NULL) {
 printf("%d ", temp->data);
 temp = temp->next;
 }
 }
 printf("\n");
 return 0;
}