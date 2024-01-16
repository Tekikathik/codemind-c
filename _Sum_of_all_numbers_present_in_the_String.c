#include<stdio.h>
int main (){
    int c=0;
    char arr[100];
    scanf("%[^
]s",arr);
    for (int i=0;arr[i]!=NULL;i++){
        if (arr[i]>='0' && arr[i]<='9')
        c=c+(arr[i]-'0');
    }
    printf("%d",c);
}