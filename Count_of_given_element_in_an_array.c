#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    int arr[a];
    for (i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int b,c=0;
    scanf("%d",&b);
    for (j=0;j<a;j++){
        if(b==arr[j])
        c++;
    }
    printf("%d",c);
}