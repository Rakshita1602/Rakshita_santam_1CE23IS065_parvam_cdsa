#include<stdio.h>
#include<stdbool.h>
int main(){
   int a[]={10,20,30,40,50};
   int n=sizeof(a)/sizeof(a[0]);
   for(int i=n-1;i>=0;i--){
        printf("%d\n",a[i]);
   }
}