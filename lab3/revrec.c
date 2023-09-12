#include<stdio.h>

void revrec(int num){
    if (num > 0){
        printf("%d",num%10);
        revrec(num/10);
    }
    else
        return;
}

int main(){
    int x; scanf("%d",&x);
    revrec(x);
    return 0;
}