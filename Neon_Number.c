#include<stdio.h>
int main (){
    int a,sum=0,b,c,d;
    scanf("%d",&a);
    b=a*a;
    d=b;
    while(b!=0){
    	c=b%10;
        sum=sum+c;
        b=b/10;
    }
    if (sum==a)
	printf("Neon Number");
    else printf("Not Neon Number");
}