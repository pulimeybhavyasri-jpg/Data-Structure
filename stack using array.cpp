#include <stdio.h>
#define MAX 5
int stack[MAX], top=-1;
void push(int x){ stack[++top]=x; }
int pop(){ return stack[top--]; }
int main(){
    push(10); push(20);
    printf("%d", pop());
}