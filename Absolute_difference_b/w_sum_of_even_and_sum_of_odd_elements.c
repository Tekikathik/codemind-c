#include<stdio.h>
int main (){
    int a,i;
    scanf("%d",&a);
    int arr[a];
    int c=0,d=0;
    for (i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if (arr[i]%2==0)
        c+=arr[i];
        else d+=arr[i];
    }
    if (d>c)
    printf("%d",d-c);
    else
    printf("%d",c-d);
    
}