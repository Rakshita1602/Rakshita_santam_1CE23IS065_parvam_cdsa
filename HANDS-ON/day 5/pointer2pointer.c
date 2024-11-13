#include<stdio.h>
void main(){
    int t=700;
    int *p=&t;
    int **pptr=&p;
    printf("%d\t%d\t%d",t,*p,**pptr);
    (**pptr)++;
    printf("%d\t%d\t%d",t,*p,**pptr);
    printf("%x\t%x\t%x\n",p,&t,&p);
}