#include<stdio.h>
void main(){
    char name[]={'c','i','t','y','c','o','l','l','e','g','e','\0'};
    printf("Vowels in the string");
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            printf("%c",str[i]);
        }
    }
    
}