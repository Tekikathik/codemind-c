#include<stdio.h>
int main (){
    int c=0;
    char arr[100];
    scanf("%[^
]s",arr);
    for (int i=0;arr[i]!=NULL;i++){
        if (arr[i]=='a' || arr[i]=='e'|| arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
        c++;
    }
    printf("%d",c);
}