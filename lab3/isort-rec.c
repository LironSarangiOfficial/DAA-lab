#include<stdio.h>

void IsortRec(int A[],int n){
    if (n==1){
        return;
    }
    else{
        IsortRec(A,n-1);
        int key = A[n-1];
        int j=n-2;
        while(A[j] > key && j>=0)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main(){
    int A[] = {10,2,24,5,100,25,87,34};
    int n = sizeof(A)/sizeof(A[0]);
    IsortRec(A,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}