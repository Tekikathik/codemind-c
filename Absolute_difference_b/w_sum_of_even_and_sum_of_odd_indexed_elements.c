#include<stdio.h>
#include<math.h>
int main ()
{
    int a,sum=0,sum1=0,i,j;
    scanf("%d",&a);
    int arr[a];
    for (i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (j=0;j<a;j++)
    {
        if(j%2==0)
        sum+=arr[j];
        else sum1+=arr[j];
    }
    if (sum1>sum)
    printf("%d",sum1-sum);
    else
    printf("%d",sum-sum1);
}