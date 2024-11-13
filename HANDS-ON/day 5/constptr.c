#include<stdio.h>
void main(){
    int t = 700;
    const int *p = &t;
    (*p)++;
    printf("%d\n", t);
}
