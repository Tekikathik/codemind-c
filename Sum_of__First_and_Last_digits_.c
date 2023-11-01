#include<stdio.h>
int main (){
    int a,b,c;
    scanf("%d",&a);
    b=a%10;
    while(a>9){
        a=a/10;
    }
    c=a;
    printf("%d",b+c);
}