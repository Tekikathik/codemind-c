#include<stdio.h>
int main (){
    char str[100],arr[100];
    int j=0;
    scanf("%s",str);
    for (int i=0;str[i]!=NULL;i++,j++){
        if (str[i]>='A' && str[i]<='Z'){
        arr[j]=str[i]+32;
        }
        else {
            arr[j]=str[i];
        }
        
    }
    printf("%s",arr);
}