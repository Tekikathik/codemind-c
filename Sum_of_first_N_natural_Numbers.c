#include<stdio.h>
int main (){
    int a,c=0;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        c=c+i;
    }
    printf("%d",c);
}