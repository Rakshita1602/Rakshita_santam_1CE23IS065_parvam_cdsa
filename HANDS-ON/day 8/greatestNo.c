#include<stdio.h>
void main(){
    int a=10,b=20,c=30;
    if(a>=b && a>=c){
        printf("The greater number is:%d\n",a);
    }else if(b>=a && b>=c){
        printf("The greater number is:%d\n",b);
    }else{
        printf("The greater number is:%d\n",c);
    }
}
