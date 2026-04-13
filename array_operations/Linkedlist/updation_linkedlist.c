#include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node *next;
};
int main() {
 struct node *head = NULL, *newnode, *temp;
 int choice = 1;
 printf("Mithlesh Paswan 240010130087\n");
 while (choice) {
 newnode = (struct node*)malloc(sizeof(struct node));
 if (newnode == NULL) {
 printf("cannot be allocated any menory\n");
 break;
 }
 printf("Enter data");
 scanf("%d", &newnode->data);
 newnode->next = NULL;
 if (head == NULL) {
 head = temp = newnode;
 } else {
 temp->next = newnode;
 temp = newnode;
 }
 printf("do you want to continue node if yes enter 1 or else 0");
 scanf("%d", &choice);
 }
 printf("Linked list: ");
 temp = head;
 while (temp != NULL) {
 printf("%d ", temp->data);
 temp = temp->next;
 }
 printf("\n");
 return 0;
}