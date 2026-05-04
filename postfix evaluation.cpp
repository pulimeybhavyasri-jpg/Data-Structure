#include<stdio.h>
#include<ctype.h>

int stack[20], top=-1;

void push(int x){
    stack[++top]=x;
}

int pop(){
    return stack[top--];
}

int main(){
    char exp[20];
    int i,a,b,res;

    printf("Enter postfix: ");
    scanf("%s",exp);

    for(i=0; exp[i]!='\0'; i++){
        if(isdigit(exp[i])){
            push(exp[i]-'0');
        }
        else{
            b=pop();
            a=pop();
            switch(exp[i]){
                case '+': res=a+b; break;
                case '-': res=a-b; break;
                case '*': res=a*b; break;
                case '/': res=a/b; break;
            }
            push(res);
        }
    }

    printf("Result = %d",pop());
}