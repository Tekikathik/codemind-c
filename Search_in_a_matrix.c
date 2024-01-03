#include<stdio.h>
int main (){
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int d;
    scanf("%d",&d);
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            if (arr[i][j]==d){
                c++;
            }
        }
    }
    printf("%d",c);
}