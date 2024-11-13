#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int arr[]={4,2,6,1,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int x=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[x]){
                x=j;
            }
        }
        int t=arr[x];
        arr[x]=arr[i];
        arr[i]=t;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}