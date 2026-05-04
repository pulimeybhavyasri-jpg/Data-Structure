#include<stdio.h>
#define MAX 5
int q[MAX], front=0, rear=-1;

void enqueue(int x){
    if(rear==MAX-1) printf("Overflow\n");
    else q[++rear]=x;
}

void dequeue(){
    if(front>rear) printf("Underflow\n");
    else printf("Deleted: %d\n",q[front++]);
}

void display(){
    for(int i=front;i<=rear;i++) printf("%d ",q[i]);
}

int main(){
    enqueue(10); enqueue(20); enqueue(30);
    printf("Queue: ");
    display();
    dequeue();
    printf("\nAfter delete: ");
    display();
}