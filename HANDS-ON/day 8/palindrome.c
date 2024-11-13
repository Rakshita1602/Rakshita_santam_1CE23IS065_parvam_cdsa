#include<stdio.h>
void main(){
    int f=12551,x=0,y=0,a=f;
    while(f>0){
        x=f%10; //x=2
        y=y*10+x; //y=321
        f=f/10; //0
    }
    if(a==y){
        printf("yes");
    }else{
        printf("no");
    }
}