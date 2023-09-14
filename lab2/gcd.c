#include<stdio.h>

int gcd(int a,int b){
    while(b != 0){
        int rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

int main(){
    printf("%d",gcd(1024, 20));
    return 0;
}