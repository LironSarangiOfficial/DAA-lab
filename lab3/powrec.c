#include<stdio.h>

int powrec(int num,int base){
    if (num == 1) return 0;
    else return 1 + powrec(num/base,base); 
}

int main(){
    int n,b;scanf("%d %d",&n,&b);
    printf("%d",powrec(n,b));
    return 0;
}