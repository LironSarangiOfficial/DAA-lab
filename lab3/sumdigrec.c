#include<stdio.h>

int sumdigrec(int num){
    if (num == 0) return 0;
    else return num%10 + sumdigrec(num/10);
}

int main(){
    int x;scanf("%d",&x);
    printf("%d",sumdigrec(x));
    return 0;
}