#include<stdio.h>

void delete(int A[],int n,int idx){
    for(int i=idx;i<n-1;i++){
        A[i] = A[i+1];
    }
}

int main(){
    int n;scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int key; scanf("%d",&key);
    delete(A,n,key);
    return 0;
}