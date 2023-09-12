#include<stdio.h>

int fiboterm(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    else return fiboterm(n-1)+fiboterm(n-2);
}

void fiboseq(int n){
    for(int i=1;i<=n;i++)
    {
        printf("%d ",fiboterm(i));
    }
    printf("\n");
}

int main(){
    fiboseq(10);
    return 0;
}