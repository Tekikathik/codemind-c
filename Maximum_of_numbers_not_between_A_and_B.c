#include<stdio.h>
#include<limits.h>
int main (){
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for (i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int c,b,j;
    scanf("%d%d",&c,&b);
    int max=INT_MIN;
    for (j=0;j<a;j++){
        if (arr[j]<c || arr[j]>b){
            if (arr[j]>max)
            max=arr[j];
        }
    }
    if (max==INT_MIN)
    printf("-1");
    else 
    printf("%d",max);
}