#include<stdio.h>
void main(){
    char name[5]={'c','i','t','y','\0'};
    printf("%s\n",name);
    printf("%c\t%c\n",name[1],name[3]);
    printf("%c\n\n",name[3]);
    printf("%c\n\n",name[3]);
    for(int i=0;i<4;i++){
        printf("%c\t\t",name[i]);
    }
}