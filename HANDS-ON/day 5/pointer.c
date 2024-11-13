#include<stdio.h>
int main(){
    int t = 700;
    int *p;          
    p = &t;     
    printf("%d\n", t);
    printf("%d", *p);
    return 0;  
}