#include<stdio.h>
int main (){
    int a,i,j;
    scanf("%d",&a);
    int arr[a];
    for (i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0,j=a-1;i<=j;i++,j--){
        if (i==j){
            printf("%d %d",arr[i],0);
        }
        else
        printf("%d %d ",arr[i],arr[j]);
    }
}