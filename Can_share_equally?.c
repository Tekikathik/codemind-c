#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int s=a+b*2;
    if(a==0 && b%2==0 )
    printf("YES");
    else if (a==0 && b%2!=0)
    printf("NO");
    else if ( s%2==0)
    printf("YES");
    
    else
    printf("NO");
}