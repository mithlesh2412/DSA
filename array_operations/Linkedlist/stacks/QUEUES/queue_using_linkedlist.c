//Mithlesh Paswan
//240010130087
#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue(int x){
 struct node *newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=x;
 newnode->next=NULL;
 if(rear==NULL){
 front=rear=newnode;
 return;
 }
 rear->next=newnode;
 rear=newnode;
}
void dequeue(){
 if(front==NULL){
 printf("queue underflow\n");
 return;
 }
 struct node *temp=front;
 front=front->next;
 if(front==NULL){
 rear=NULL;
 }
 printf("dequeued element : %d\n",temp->data);
 free(temp);
}
void peek() {
 if (front == NULL) {
 printf("queue is empty\n");
 } else {
 printf("front element : %d\n", front->data);
 }
}
void display(){
 struct node *temp=front;
 if(front==NULL){
 printf("queue underflow\n");
 return;
 }
 else{
 printf("queue elements : ");
 while(temp!=NULL){
 printf("%d ",temp->data);
 temp=temp->next;
 }
 printf("\n");
 }
}
int main()
{
 printf("Mithlesh Paswan 240010130087\n");
 enqueue(3);
 enqueue(4);
 enqueue(5);
 enqueue(6);
 enqueue(7);
 enqueue(8);
 dequeue();
 dequeue();
 peek();
 display();
 return 0;
}