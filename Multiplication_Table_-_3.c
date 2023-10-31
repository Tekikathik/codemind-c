#include<stdio.h>
int main (){
    int a,b,c,d,i;
    scanf("%d%d%d",&a,&b,&c);
    for (d=b;d<=c;d++){
        i=a*d;
        printf("%d x %d = %d
",a,d,i);
        
    }
}