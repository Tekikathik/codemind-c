#include<stdio.h>
int main (){
    char str[100];
    int sum=0;
    scanf("%[^
]s",str);
    for (int i=0;str[i]!=NULL;i++){
        if ((str[i]>'0') && (str[i]<='9')){
        sum=sum+(str[i]-'0') ;
    }
        
    }
    
    printf("%d",sum);
    
}