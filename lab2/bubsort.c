#include<stdio.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
void disp(int A[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
}

int Bubblesort(int A[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (A[j] > A[j+1])
                swap(&A[j],&A[j+1]);
        }
    }
}

int main(){
    int n;scanf("%d",&n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    Bubblesort(A,n);
    disp(A,n);
    return 0;
}