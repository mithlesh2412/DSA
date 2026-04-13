//Mithlesh Paswan
//240010130087
#include<stdio.h>
#define size 5
int queue[size];
int front=-1,rear=-1;
void enqueue(int x){
 if(rear==size-1){
 printf("queue overflow !\n");
 }
 else{
 if(front==-1){
 front=0;
 }
 rear=rear+1;
 queue[rear]=x;
 }
}
void dequeue(){
 int item;
 if(front==-1 || front>rear){
 printf("queue underflow !\n");
 }
 else{
 item=queue[front];
 front=front+1;

 }
 printf("Deleted element : %d\n",item);
}
void peek(){
 if(front==-1 ||rear<front){
 printf("Queue underflow !");
 }
 else{
 printf("Front element : %d\n",queue[front]);
 }
}
void display(){
 if(front==-1 || front>rear){
 printf("queue is empty !\n");
 }
 else{
 printf("Queue elements are : ");
 for(int i=front;i<=rear;i++){
 printf("%d ",queue[i]);
 }
 printf("\n");
 }
}
int main()
{
 printf("Mithlesh Paswan 240010130087\n");
 enqueue(3);
 enqueue(1);
 enqueue(2);
 enqueue(55);
 enqueue(56);
 enqueue(77);
 dequeue();
 dequeue();
 peek();
 display();
 return 0;
}