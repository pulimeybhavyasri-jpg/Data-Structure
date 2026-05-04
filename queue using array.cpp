#include <stdio.h>
#define MAX 5
int q[MAX], f=0,r=-1;
void enqueue(int x){ q[++r]=x; }
int dequeue(){ return q[f++]; }
int main(){
    enqueue(1); enqueue(2);
    printf("%d", dequeue());
}