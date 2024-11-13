#include<stdio.h>
void main(){
    int f=123,x=0,y=0;
    while(f>0){
        x=f%10; //x=2
        y=y*10+x; //y=321
        f=f/10; //0
    }printf("%d",y);
}