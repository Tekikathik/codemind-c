#include<stdio.h>
int main (){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for (int j=1;j<=a;j++){
            if (j%2==0)
            printf("%d ",0);
            else printf("%d ",1);
        }
        printf("
");
    }
}