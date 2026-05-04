#include <stdio.h>
#include <string.h>
#include <ctype.h>

char stack[100];
int top=-1;

void push(char x){ stack[++top]=x; }
char pop(){ return stack[top--]; }

int priority(char x){
    if(x=='+'||x=='-') return 1;
    if(x=='*'||x=='/') return 2;
    return 0;
}

void reverse(char exp[]){
    int i,j;
    char temp;
    for(i=0,j=strlen(exp)-1;i<j;i++,j--){
        temp=exp[i];
        exp[i]=exp[j];
        exp[j]=temp;
    }
}

int main(){
    char exp[100]="A+B*C";
    reverse(exp);

    for(int i=0;exp[i];i++){
        if(exp[i]=='(') exp[i]=')';
        else if(exp[i]==')') exp[i]='(';
    }

    // reuse postfix logic
}