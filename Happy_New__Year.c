#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a*60;
    printf("%d",1440-(c+b));
}