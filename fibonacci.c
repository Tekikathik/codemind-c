#include<stdio.h>
int main (){
    int a,sum=0,b,c;
    scanf("%d",&a);
    b=0;
    c=1;
    printf("%d %d ",b,c);
    for (int i=1;i<=a-2;i++){
        sum=b+c;
        b=c;
        c=sum;
        printf("%d ",sum);
    }
}