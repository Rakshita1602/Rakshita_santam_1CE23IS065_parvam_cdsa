#include<stdio.h>
void main(){
    int arr[]={4,5,6,200,13,7};
    arr[1]=30;
    int *p=&arr[0];
    printf("%d",arr[0]);
    printf("%d\n",*p);
    printf("%d\n",arr[3]);
}