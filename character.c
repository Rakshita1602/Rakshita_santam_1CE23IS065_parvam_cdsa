#include<stdio.h>
void main(){
    printf("%c",'A');//character
    printf("%s".'A');//string
}
char ch='B';
printf("%c",ch);
pritnf("%d",ch);
ch++;
printf("%d",ch);
printf("%c",ch);
int i=ch;//Convert character to integer method 2 of finding ASCII value
printf("%d",i);
i+=32;
printf("%d",i);
i+=32;
ch=i;
printf("%c",ch);
ch='t';
i=ch;
i-=32;
ch=i;
printf("%c",ch);