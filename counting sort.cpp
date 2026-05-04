#include <stdio.h>

int main(){
    int a[]={4,2,2,8,3};
    int n=5;

    int count[10]={0};

    for(int i=0;i<n;i++)
        count[a[i]]++;

    for(int i=0;i<10;i++){
        while(count[i]--){
            printf("%d ",i);
        }
    }
}