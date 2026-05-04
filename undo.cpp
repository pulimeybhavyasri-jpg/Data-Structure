#include <stdio.h>

#define MAX 10
char stack[MAX];
int top=-1;

void push(char x){
    stack[++top]=x;
}

char undo(){
    if(top==-1) return '\0';
    return stack[top--];
}

int main(){
    push('A');
    push('B');
    push('C');

    printf("Undo: %c\n", undo()); // removes C
    printf("Undo: %c\n", undo()); // removes B
}