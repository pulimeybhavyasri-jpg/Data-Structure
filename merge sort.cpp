#include <stdio.h>

void merge(int a[],int l,int m,int r){
    int i=l,j=m+1,k=0,temp[100];

    while(i<=m && j<=r){
        if(a[i]<a[j]) temp[k++]=a[i++];
        else temp[k++]=a[j++];
    }
    while(i<=m) temp[k++]=a[i++];
    while(j<=r) temp[k++]=a[j++];

    for(i=l,k=0;i<=r;i++,k++)
        a[i]=temp[k];
}

void mergeSort(int a[],int l,int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main(){
    int a[]={4,1,3,2};
    mergeSort(a,0,3);
    for(int i=0;i<4;i++) printf("%d ",a[i]);
}#include <stdio.h>

void merge(int a[],int l,int m,int r){
    int i=l,j=m+1,k=0,temp[100];

    while(i<=m && j<=r){
        if(a[i]<a[j]) temp[k++]=a[i++];
        else temp[k++]=a[j++];
    }
    while(i<=m) temp[k++]=a[i++];
    while(j<=r) temp[k++]=a[j++];

    for(i=l,k=0;i<=r;i++,k++)
        a[i]=temp[k];
}

void mergeSort(int a[],int l,int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main(){
    int a[]={4,1,3,2};
    mergeSort(a,0,3);
    for(int i=0;i<4;i++) printf("%d ",a[i]);
}