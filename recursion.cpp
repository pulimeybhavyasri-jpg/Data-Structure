#include <stdio.h>

#define MAX 5
int stack[MAX], top=-1;

void push(int x){
    stack[++top]=x;
}

int pop(){
    return stack[top--];
}

// insert at bottom using recursion
void insertBottom(int x){
    if(top==-1){
        push(x);
        return;
    }
    int temp=pop();
    insertBottom(x);
    push(temp);
}

// reverse stack using recursion
void reverse(){
    if(top!=-1){
        int temp=pop();
        reverse();
        insertBottom(temp);
    }
}

int main(){
    push(1); push(2); push(3);
    reverse();

    while(top!=-1)
        printf("%d ", pop());
}