#include<stdio.h>
int main (){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for (int j=1;j<=i;j++){
            printf("%d",i);
        }
        for (int k=a-1;k>=i;k--){
            printf("*");
        }
        printf("
");
    }
}