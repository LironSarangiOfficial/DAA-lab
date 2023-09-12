#include<stdio.h>

int strlenrec(char* s){
    if (s[0] == '\0') return 0;
    else return 1 + strlenrec(++s);
}

int main(){
    char name[] = "Liron";
    int l = strlenrec(name);
    printf("%d",l);
    return 0;
}