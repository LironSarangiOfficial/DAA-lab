#include<stdio.h>

void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void revarr(int A[],int n){
    int* ptr = A;
    for(int i=0;i<n/2;i++){
        swap(ptr+i,ptr+n-i-1);
    }
}

void disp(int A[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
}

int main(){
    int A[] = {6,3,8,54,45,22,8};
    int n = sizeof(A)/sizeof(A[0]);
    disp(A,n);
    printf("\n");
    revarr(A,n);
    disp(A,n);
    return 0;
}