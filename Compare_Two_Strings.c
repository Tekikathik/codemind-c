#include<stdio.h>
#include<string.h>
int main (){
    char str[100], stri[100];
    int b;
    scanf("%s%s",str,stri);
    b=strcmp(str,stri);
    if (b==0)
    printf("Strings are Equal");
    else if (b>0  ||b<0)printf("Strings are not Equal");
    //printf("%d",b);
}