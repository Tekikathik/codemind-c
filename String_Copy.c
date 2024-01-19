#include<stdio.h>
int main (){
    char str[100],newstr[100];
    int j=0;
    scanf("%[^
]s",str);
    for (int i=0;str[i]!=NULL;i++,j++){
        newstr[j]=str[i];
    }
    printf("%s",newstr);
}